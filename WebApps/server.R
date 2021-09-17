library(stringr)
library(shinyjs)

server <- function(input, output, session) {
    conn <- serialConnection("arduino", port="COM3", mode="9600,n,8,1")
    close(conn)
    open(conn)
    
    
    read_data <- function(){
        
        
        write.serialConnection(conn,'@')
        #yeu cau truyen data
        tam <- ""
        foo <- ""
        newText <- read.serialConnection(conn)
        if(0 < nchar(newText))
        {
            foo <- paste(foo, newText)
        }
        if(str_length(foo) < 33 || str_length(foo) >33 ){
             foo <- tam
        }
        tam <- foo
    }
    
    
    #Ham tra ve gia tri
    newdata <- eventReactive(input$goButton,{
        read_data()
        
    })
    
    output$display <- renderText({newdata()})
    
    #HIen thi gia tri sau 30s
    output$TextDisplay <- renderText({newdata()})
    
    
    close_port <- eventReactive(input$CloseButton,{
        close(conn)
        stopApp(returnValue = invisible())
    })         
    
    observeEvent(input$CloseButton,{
        close_port()
    })
    
    #Can khai bao use Shiny JS o ui.R
    #Auto click button after 1s
     observe({
         click("goButton")
         invalidateLater(1000)
     })
    
    
    #Auto refresh trang
    #Auto refresh page (lam sau cung khi code xong san pham): 
    #1 hours (1000 milliseconds*60 seconds*60 minutes* 0.5 hours)
    #Auto reload 30 minute = 1800000
    #Auto reload 10 seconds = 10000
    #shinyjs::runjs(
    #    "function reload_page() {
    #        window.location.reload();
    #        setTimeout(reload_page, 1000);
    #    }
    #    setTimeout(reload_page, 1000);
    #")
    
    #####Giai thich:
    #eventReactive: se di voi lenh sau output$display <- renderText({m()})
    #voi m() chinh la ham duoc thuc thi boi eventReactive.
    # Cu the: 
    #     m <- eventReactive(input$goButton,{
    #         #open(conn)
    #         val <- 1
    #     })
    # observeEvent: la thu tuc void () khong co gia tri tra ve
    # observeEvent(input$CloseButton,{
    #     output$display <- renderText({"gia tri"})
    # }) Su dung phim Ctrl Shift C
}

