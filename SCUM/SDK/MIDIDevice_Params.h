#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function MIDIDevice.MIDIDeviceManager.GetMIDIOutputDeviceIDByName
	 */
	struct UMIDIDeviceManager_GetMIDIOutputDeviceIDByName_Params
	{
	public:
		class FString                                              DeviceName;                                              // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    DeviceID;                                                // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MIDIDevice.MIDIDeviceManager.GetMIDIInputDeviceIDByName
	 */
	struct UMIDIDeviceManager_GetMIDIInputDeviceIDByName_Params
	{
	public:
		class FString                                              DeviceName;                                              // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    DeviceID;                                                // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MIDIDevice.MIDIDeviceManager.GetDefaultMIDIOutputDeviceID
	 */
	struct UMIDIDeviceManager_GetDefaultMIDIOutputDeviceID_Params
	{
	public:
		int32_t                                                    DeviceID;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MIDIDevice.MIDIDeviceManager.GetDefaultMIDIInputDeviceID
	 */
	struct UMIDIDeviceManager_GetDefaultMIDIInputDeviceID_Params
	{
	public:
		int32_t                                                    DeviceID;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MIDIDevice.MIDIDeviceManager.FindMIDIDevices
	 */
	struct UMIDIDeviceManager_FindMIDIDevices_Params
	{
	public:
		TArray<struct FFoundMIDIDevice>                            OutMIDIDevices;                                          // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MIDIDevice.MIDIDeviceManager.FindAllMIDIDeviceInfo
	 */
	struct UMIDIDeviceManager_FindAllMIDIDeviceInfo_Params
	{
	public:
		TArray<struct FMIDIDeviceInfo>                             OutMIDIInputDevices;                                     // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FMIDIDeviceInfo>                             OutMIDIOutputDevices;                                    // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MIDIDevice.MIDIDeviceManager.CreateMIDIDeviceOutputController
	 */
	struct UMIDIDeviceManager_CreateMIDIDeviceOutputController_Params
	{
	public:
		int32_t                                                    DeviceID;                                                // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8070[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UMIDIDeviceOutputController*                         ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MIDIDevice.MIDIDeviceManager.CreateMIDIDeviceInputController
	 */
	struct UMIDIDeviceManager_CreateMIDIDeviceInputController_Params
	{
	public:
		int32_t                                                    DeviceID;                                                // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    MIDIBufferSize;                                          // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMIDIDeviceInputController*                          ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MIDIDevice.MIDIDeviceManager.CreateMIDIDeviceController
	 */
	struct UMIDIDeviceManager_CreateMIDIDeviceController_Params
	{
	public:
		int32_t                                                    DeviceID;                                                // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    MIDIBufferSize;                                          // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UMIDIDeviceController*                               ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MIDIDevice.MIDIDeviceOutputController.SendMIDIProgramChange
	 */
	struct UMIDIDeviceOutputController_SendMIDIProgramChange_Params
	{
	public:
		int32_t                                                    Channel;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ProgramNumber;                                           // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MIDIDevice.MIDIDeviceOutputController.SendMIDIPitchBend
	 */
	struct UMIDIDeviceOutputController_SendMIDIPitchBend_Params
	{
	public:
		int32_t                                                    Channel;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Pitch;                                                   // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MIDIDevice.MIDIDeviceOutputController.SendMIDINoteOn
	 */
	struct UMIDIDeviceOutputController_SendMIDINoteOn_Params
	{
	public:
		int32_t                                                    Channel;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Note;                                                    // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Velocity;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MIDIDevice.MIDIDeviceOutputController.SendMIDINoteOff
	 */
	struct UMIDIDeviceOutputController_SendMIDINoteOff_Params
	{
	public:
		int32_t                                                    Channel;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Note;                                                    // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Velocity;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MIDIDevice.MIDIDeviceOutputController.SendMIDINoteAftertouch
	 */
	struct UMIDIDeviceOutputController_SendMIDINoteAftertouch_Params
	{
	public:
		int32_t                                                    Channel;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Note;                                                    // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Amount;                                                  // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MIDIDevice.MIDIDeviceOutputController.SendMIDIEvent
	 */
	struct UMIDIDeviceOutputController_SendMIDIEvent_Params
	{
	public:
		EMIDIEventType                                             EventType;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KEG2[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Channel;                                                 // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    data1;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    data2;                                                   // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MIDIDevice.MIDIDeviceOutputController.SendMIDIControlChange
	 */
	struct UMIDIDeviceOutputController_SendMIDIControlChange_Params
	{
	public:
		int32_t                                                    Channel;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Type;                                                    // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Value;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MIDIDevice.MIDIDeviceOutputController.SendMIDIChannelAftertouch
	 */
	struct UMIDIDeviceOutputController_SendMIDIChannelAftertouch_Params
	{
	public:
		int32_t                                                    Channel;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Amount;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
