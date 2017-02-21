learn program: load a .txt document via the program's runtime argument, e.g learn.exe "humanity.txt" and type in 'load file' at the prompt for the learn program to consolidate knowledge into 'knowledgebase.txt'

synthreason: type in the knowledgebase filename first, then type in the context. e.g: knowledgebase: conscious, context: human

synthreason will then scan through the knowledgebase to gather information using some form of bayesian content matching according to the context and supplying that information while following preprogrammed language syntax series.

e.g it will fill out a syntax of "{"subject", "verb", "object"}" with information from a knowledgebase. it will query the knowledgebase with questions like "_requestsubject_ human?" "_requestverb lifeform?" "_requestobject_ live?" and you will get an answer like "human lifeform live" it does all  this automatically, you just have to fill out 'string SentStruct[]' and modify the 'int J' variable according to what and when you want data from SentStruct to influence the info request feature. everything except main() probably does not need changing. change what you want in main(). :)