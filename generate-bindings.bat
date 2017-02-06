@echo "Running JNAerator..."
java -jar ./jnaerator-0.12-shaded.jar -arch win32 -library JOpenVR openvr/bin/win32/openvr_api.dll openvr/headers/openvr_capi.h 	-mode Directory -runtime JNA -noComments -direct -o src/ -f -v
@echo "Copying files..."
@echo off
pause