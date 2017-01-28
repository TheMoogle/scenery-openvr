package graphics.scenery.jopenvr;
import com.ochafik.lang.jnaerator.runtime.Structure;
import com.sun.jna.Pointer;
import java.util.Arrays;
import java.util.List;
/**
 * This file was autogenerated by <a href="http://jnaerator.googlecode.com/">JNAerator</a>,<br>
 * a tool written by <a href="http://ochafik.com/">Olivier Chafik</a> that <a href="http://code.google.com/p/jnaerator/wiki/CreditsAndLicense">uses a few opensource projects.</a>.<br>
 * For help, please visit <a href="http://nativelibs4java.googlecode.com/">NativeLibs4Java</a> , <a href="http://rococoa.dev.java.net/">Rococoa</a>, or <a href="http://jna.dev.java.net/">JNA</a>.
 */
public class VREvent_Screenshot_t extends Structure<VREvent_Screenshot_t, VREvent_Screenshot_t.ByValue, VREvent_Screenshot_t.ByReference > {
	public int handle;
	public int type;
	public VREvent_Screenshot_t() {
		super();
	}
	protected List<? > getFieldOrder() {
		return Arrays.asList("handle", "type");
	}
	public VREvent_Screenshot_t(int handle, int type) {
		super();
		this.handle = handle;
		this.type = type;
	}
	public VREvent_Screenshot_t(Pointer peer) {
		super(peer);
	}
	protected ByReference newByReference() { return new ByReference(); }
	protected ByValue newByValue() { return new ByValue(); }
	protected VREvent_Screenshot_t newInstance() { return new VREvent_Screenshot_t(); }
	public static VREvent_Screenshot_t[] newArray(int arrayLength) {
		return Structure.newArray(VREvent_Screenshot_t.class, arrayLength);
	}
	public static class ByReference extends VREvent_Screenshot_t implements Structure.ByReference {
		
	};
	public static class ByValue extends VREvent_Screenshot_t implements Structure.ByValue {
		
	};
}