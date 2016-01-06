package com.pvue
{
    import flash.external.ExtensionContext;
    
    public class Hello {
        private var context:ExtensionContext;

        public function Hello() {
            context = ExtensionContext.createExtensionContext('com.pvue.hello', '');
        }
        
        public function dispose() : void {
            context.dispose();
        }
        
        public function say_hi() : String {
            return context.call('say_hi') as String;            
        }
    }
}
