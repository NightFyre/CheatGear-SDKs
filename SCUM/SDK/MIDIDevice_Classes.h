#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class MIDIDevice.MIDIDeviceControllerBase
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMIDIDeviceControllerBase : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MIDIDevice.MIDIDeviceController
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class UMIDIDeviceController : public UMIDIDeviceControllerBase
	{
	public:
		class FScriptMulticastDelegate                             OnMidiEvent;                                             // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		int32_t                                                    DeviceID;                                                // 0x0038(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_BUBG[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DeviceName;                                              // 0x0040(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2JZD[0x10];                                  // 0x0050(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MIDIDevice.MIDIDeviceInputController
	 * Size -> 0x00B0 (FullSize[0x00D8] - InheritedSize[0x0028])
	 */
	class UMIDIDeviceInputController : public UMIDIDeviceControllerBase
	{
	public:
		class FScriptMulticastDelegate                             OnMIDINoteOn;                                            // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMIDINoteOff;                                           // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMIDIPitchBend;                                         // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMIDIAftertouch;                                        // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMIDIControlChange;                                     // 0x0068(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMIDIProgramChange;                                     // 0x0078(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMIDIChannelAftertouch;                                 // 0x0088(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YL9U[0x18];                                  // 0x0098(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    DeviceID;                                                // 0x00B0(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_BH9M[0x4];                                   // 0x00B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DeviceName;                                              // 0x00B8(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MQ2T[0x10];                                  // 0x00C8(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MIDIDevice.MIDIDeviceManager
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMIDIDeviceManager : public UBlueprintFunctionLibrary
	{
	public:
		void GetMIDIOutputDeviceIDByName(const class FString& DeviceName, int32_t* DeviceID);
		void GetMIDIInputDeviceIDByName(const class FString& DeviceName, int32_t* DeviceID);
		void GetDefaultMIDIOutputDeviceID(int32_t* DeviceID);
		void GetDefaultMIDIInputDeviceID(int32_t* DeviceID);
		void FindMIDIDevices(TArray<struct FFoundMIDIDevice>* OutMIDIDevices);
		void FindAllMIDIDeviceInfo(TArray<struct FMIDIDeviceInfo>* OutMIDIInputDevices, TArray<struct FMIDIDeviceInfo>* OutMIDIOutputDevices);
		class UMIDIDeviceOutputController* CreateMIDIDeviceOutputController(int32_t DeviceID);
		class UMIDIDeviceInputController* CreateMIDIDeviceInputController(int32_t DeviceID, int32_t MIDIBufferSize);
		class UMIDIDeviceController* CreateMIDIDeviceController(int32_t DeviceID, int32_t MIDIBufferSize);
		static UClass* StaticClass();
	};

	/**
	 * Class MIDIDevice.MIDIDeviceOutputController
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UMIDIDeviceOutputController : public UMIDIDeviceControllerBase
	{
	public:
		int32_t                                                    DeviceID;                                                // 0x0028(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6CR3[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DeviceName;                                              // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_OK8K[0x8];                                   // 0x0040(0x0008) MISSED OFFSET (PADDING)

	public:
		void SendMIDIProgramChange(int32_t Channel, int32_t ProgramNumber);
		void SendMIDIPitchBend(int32_t Channel, int32_t Pitch);
		void SendMIDINoteOn(int32_t Channel, int32_t Note, int32_t Velocity);
		void SendMIDINoteOff(int32_t Channel, int32_t Note, int32_t Velocity);
		void SendMIDINoteAftertouch(int32_t Channel, int32_t Note, float Amount);
		void SendMIDIEvent(EMIDIEventType EventType, int32_t Channel, int32_t data1, int32_t data2);
		void SendMIDIControlChange(int32_t Channel, int32_t Type, int32_t Value);
		void SendMIDIChannelAftertouch(int32_t Channel, float Amount);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
