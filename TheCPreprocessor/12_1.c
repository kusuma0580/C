/* If a macro is not getting expanded as per your expectation, how will 
you find out how is it being expanded by the preprocessor? */


//Answer

/*To see how a macro is being expanded by the preprocessor, you can use the gcc compiler's -E option. 
This option instructs the compiler to stop after the preprocessing stage and output the preprocessed source code. 
Here's how you can use it:
gcc -E your_program.c -o output_file.i

output_file.i with the name of the file where you want to save the preprocessed code.

After running this command, you can open the output_file.i file in any text editor 
to see how the macro has been expanded by the preprocessor. 
This can help you debug any issues with macro expansion and understand how your code is being processed by the compiler.*/