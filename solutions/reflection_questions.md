```markdown
**Reflection Questions**
### Task 1

1. **What steps are required to open an X11 window and receive events?**  
   First, you need to open a connection to the X server using `XOpenDisplay()`. Then you create a window with `XCreateSimpleWindow()`. After that, you must select the kind of events you wan>

2. **How does the Expose event trigger your drawing code?**  
   The `Expose` event is triggered when the window needs to be redrawn, for example, after resizing or when another window was moved away. In the event loop, when an `Expose` event is detec>

### Task 2

1. **How does GTK’s signal-and-callback mechanism differ from X11’s event loop?**  
   In X11, you have to manually write an event loop that checks each event type and responds to it. This means you control the flow and handle everything by yourself. In GTK, you use signal>

2. **Why use pkg-config when compiling GTK applications?**  
   `pkg-config` gives you the correct compiler and linker flags needed to build GTK applications. GTK has many files and libraries, and manually writing all paths would be difficult and err>
```



