programmed with

gcc (GCC) 16.0.1 20260217 (experimental)

this library is like 30 to maybe 50% complete, but it already surpasses what my current needs are.

few notes,
* there's no meaningful function reflection. you can check member functions, but if you have 3 constructors like in the following image, there's no way to differentiate between them.

<img width="1148" height="647" alt="image" src="https://github.com/user-attachments/assets/2f89257d-6b02-4055-b117-2a5706c41b24" />

* I'm not sure if it's intentional or not, but hitting exceptions and compiler errors is extremely easy.

calling template_arguments_of on an incomplete template is an error. calling identifier_of on info that doesnlt have_identifier throws, and so on.

feels like json parsing or javascript programming where you want a quick workflow -> compile, check, tweak, repeat

this library should ease that pain point a little bit.

* symbol manglign is tuff when using template for loops, i'm not sure if that's a natural byproduct or a result of the experimental branch.
* personally, without full function reflection this isn't too useful besides some member iterating. i'll probably stop developign the library here.
