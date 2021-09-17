library(shiny)

# Define UI for application that draws a histogram
shinyUI(fluidPage(
    shinyjs::useShinyjs(),

    # Application title
    titlePanel("Giao tiếp với Arduino"),

    # Sidebar with a slider input for number of bins
    sidebarLayout(
        sidebarPanel(
            actionButton("goButton","GO",icon = icon("accessible-icon"),class = "btn-success"),
            actionButton("closeButton","CLOSE",icon = icon("allergies"),class = "btn-success")
        ),

        # Show a plot of the generated distribution
        mainPanel(
            textOutput("TextDisplay")
        ),
    ),
))
