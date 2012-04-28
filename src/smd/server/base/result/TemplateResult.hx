package smd.server.base.result;


/**
 * ...
 * @author Jonas Nyström
 */

class TemplateResult extends ActionResult
{
	private var templateFile:String;
	private var data:Dynamic;
	public function new(templateFile:String, ?data:Dynamic=null) {
		this.templateFile = cx.Web.getCwd() + '/' + templateFile;
		this.data = data;
		if (!neko.FileSystem.exists(this.templateFile)) throw new harfang.exceptions.Exception("Can''t find templateFile " + templateFile);		
	}
	
	override public function execute() {		
		var templateStr = cx.FileTools.getContent(this.templateFile);
        var t = new haxe.Template(templateStr);
        var output = t.execute(this.data);
        return output;
	}	

}