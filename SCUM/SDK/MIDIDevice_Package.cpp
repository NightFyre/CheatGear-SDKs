/**
 * Name: SCUM
 * Version: 0.7.162
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMIDIDeviceControllerBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMIDIDeviceControllerBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MIDIDevice.MIDIDeviceControllerBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMIDIDeviceController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMIDIDeviceController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MIDIDevice.MIDIDeviceController");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMIDIDeviceInputController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMIDIDeviceInputController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MIDIDevice.MIDIDeviceInputController");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MIDIDevice.MIDIDeviceManager.GetMIDIOutputDeviceIDByName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      DeviceName                                                 (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            DeviceID                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMIDIDeviceManager::GetMIDIOutputDeviceIDByName(const class FString& DeviceName, int32_t* DeviceID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MIDIDevice.MIDIDeviceManager.GetMIDIOutputDeviceIDByName");
		
		UMIDIDeviceManager_GetMIDIOutputDeviceIDByName_Params params {};
		params.DeviceName = DeviceName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DeviceID != nullptr)
			*DeviceID = params.DeviceID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MIDIDevice.MIDIDeviceManager.GetMIDIInputDeviceIDByName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      DeviceName                                                 (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            DeviceID                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMIDIDeviceManager::GetMIDIInputDeviceIDByName(const class FString& DeviceName, int32_t* DeviceID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MIDIDevice.MIDIDeviceManager.GetMIDIInputDeviceIDByName");
		
		UMIDIDeviceManager_GetMIDIInputDeviceIDByName_Params params {};
		params.DeviceName = DeviceName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DeviceID != nullptr)
			*DeviceID = params.DeviceID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MIDIDevice.MIDIDeviceManager.GetDefaultMIDIOutputDeviceID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            DeviceID                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMIDIDeviceManager::GetDefaultMIDIOutputDeviceID(int32_t* DeviceID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MIDIDevice.MIDIDeviceManager.GetDefaultMIDIOutputDeviceID");
		
		UMIDIDeviceManager_GetDefaultMIDIOutputDeviceID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DeviceID != nullptr)
			*DeviceID = params.DeviceID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MIDIDevice.MIDIDeviceManager.GetDefaultMIDIInputDeviceID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            DeviceID                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMIDIDeviceManager::GetDefaultMIDIInputDeviceID(int32_t* DeviceID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MIDIDevice.MIDIDeviceManager.GetDefaultMIDIInputDeviceID");
		
		UMIDIDeviceManager_GetDefaultMIDIInputDeviceID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DeviceID != nullptr)
			*DeviceID = params.DeviceID;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MIDIDevice.MIDIDeviceManager.FindMIDIDevices
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FFoundMIDIDevice>                    OutMIDIDevices                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UMIDIDeviceManager::FindMIDIDevices(TArray<struct FFoundMIDIDevice>* OutMIDIDevices)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MIDIDevice.MIDIDeviceManager.FindMIDIDevices");
		
		UMIDIDeviceManager_FindMIDIDevices_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutMIDIDevices != nullptr)
			*OutMIDIDevices = params.OutMIDIDevices;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MIDIDevice.MIDIDeviceManager.FindAllMIDIDeviceInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FMIDIDeviceInfo>                     OutMIDIInputDevices                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FMIDIDeviceInfo>                     OutMIDIOutputDevices                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UMIDIDeviceManager::FindAllMIDIDeviceInfo(TArray<struct FMIDIDeviceInfo>* OutMIDIInputDevices, TArray<struct FMIDIDeviceInfo>* OutMIDIOutputDevices)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MIDIDevice.MIDIDeviceManager.FindAllMIDIDeviceInfo");
		
		UMIDIDeviceManager_FindAllMIDIDeviceInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutMIDIInputDevices != nullptr)
			*OutMIDIInputDevices = params.OutMIDIInputDevices;
		if (OutMIDIOutputDevices != nullptr)
			*OutMIDIOutputDevices = params.OutMIDIOutputDevices;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MIDIDevice.MIDIDeviceManager.CreateMIDIDeviceOutputController
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            DeviceID                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMIDIDeviceOutputController* UMIDIDeviceManager::CreateMIDIDeviceOutputController(int32_t DeviceID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MIDIDevice.MIDIDeviceManager.CreateMIDIDeviceOutputController");
		
		UMIDIDeviceManager_CreateMIDIDeviceOutputController_Params params {};
		params.DeviceID = DeviceID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MIDIDevice.MIDIDeviceManager.CreateMIDIDeviceInputController
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            DeviceID                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MIDIBufferSize                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMIDIDeviceInputController* UMIDIDeviceManager::CreateMIDIDeviceInputController(int32_t DeviceID, int32_t MIDIBufferSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MIDIDevice.MIDIDeviceManager.CreateMIDIDeviceInputController");
		
		UMIDIDeviceManager_CreateMIDIDeviceInputController_Params params {};
		params.DeviceID = DeviceID;
		params.MIDIBufferSize = MIDIBufferSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MIDIDevice.MIDIDeviceManager.CreateMIDIDeviceController
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            DeviceID                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MIDIBufferSize                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMIDIDeviceController* UMIDIDeviceManager::CreateMIDIDeviceController(int32_t DeviceID, int32_t MIDIBufferSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MIDIDevice.MIDIDeviceManager.CreateMIDIDeviceController");
		
		UMIDIDeviceManager_CreateMIDIDeviceController_Params params {};
		params.DeviceID = DeviceID;
		params.MIDIBufferSize = MIDIBufferSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMIDIDeviceManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMIDIDeviceManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MIDIDevice.MIDIDeviceManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MIDIDevice.MIDIDeviceOutputController.SendMIDIProgramChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Channel                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ProgramNumber                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMIDIDeviceOutputController::SendMIDIProgramChange(int32_t Channel, int32_t ProgramNumber)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MIDIDevice.MIDIDeviceOutputController.SendMIDIProgramChange");
		
		UMIDIDeviceOutputController_SendMIDIProgramChange_Params params {};
		params.Channel = Channel;
		params.ProgramNumber = ProgramNumber;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MIDIDevice.MIDIDeviceOutputController.SendMIDIPitchBend
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Channel                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Pitch                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMIDIDeviceOutputController::SendMIDIPitchBend(int32_t Channel, int32_t Pitch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MIDIDevice.MIDIDeviceOutputController.SendMIDIPitchBend");
		
		UMIDIDeviceOutputController_SendMIDIPitchBend_Params params {};
		params.Channel = Channel;
		params.Pitch = Pitch;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MIDIDevice.MIDIDeviceOutputController.SendMIDINoteOn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Channel                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Note                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Velocity                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMIDIDeviceOutputController::SendMIDINoteOn(int32_t Channel, int32_t Note, int32_t Velocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MIDIDevice.MIDIDeviceOutputController.SendMIDINoteOn");
		
		UMIDIDeviceOutputController_SendMIDINoteOn_Params params {};
		params.Channel = Channel;
		params.Note = Note;
		params.Velocity = Velocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MIDIDevice.MIDIDeviceOutputController.SendMIDINoteOff
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Channel                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Note                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Velocity                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMIDIDeviceOutputController::SendMIDINoteOff(int32_t Channel, int32_t Note, int32_t Velocity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MIDIDevice.MIDIDeviceOutputController.SendMIDINoteOff");
		
		UMIDIDeviceOutputController_SendMIDINoteOff_Params params {};
		params.Channel = Channel;
		params.Note = Note;
		params.Velocity = Velocity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MIDIDevice.MIDIDeviceOutputController.SendMIDINoteAftertouch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Channel                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Note                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMIDIDeviceOutputController::SendMIDINoteAftertouch(int32_t Channel, int32_t Note, float Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MIDIDevice.MIDIDeviceOutputController.SendMIDINoteAftertouch");
		
		UMIDIDeviceOutputController_SendMIDINoteAftertouch_Params params {};
		params.Channel = Channel;
		params.Note = Note;
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MIDIDevice.MIDIDeviceOutputController.SendMIDIEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMIDIEventType                                     EventType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Channel                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            data1                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            data2                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMIDIDeviceOutputController::SendMIDIEvent(EMIDIEventType EventType, int32_t Channel, int32_t data1, int32_t data2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MIDIDevice.MIDIDeviceOutputController.SendMIDIEvent");
		
		UMIDIDeviceOutputController_SendMIDIEvent_Params params {};
		params.EventType = EventType;
		params.Channel = Channel;
		params.data1 = data1;
		params.data2 = data2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MIDIDevice.MIDIDeviceOutputController.SendMIDIControlChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Channel                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMIDIDeviceOutputController::SendMIDIControlChange(int32_t Channel, int32_t Type, int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MIDIDevice.MIDIDeviceOutputController.SendMIDIControlChange");
		
		UMIDIDeviceOutputController_SendMIDIControlChange_Params params {};
		params.Channel = Channel;
		params.Type = Type;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MIDIDevice.MIDIDeviceOutputController.SendMIDIChannelAftertouch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Channel                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMIDIDeviceOutputController::SendMIDIChannelAftertouch(int32_t Channel, float Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MIDIDevice.MIDIDeviceOutputController.SendMIDIChannelAftertouch");
		
		UMIDIDeviceOutputController_SendMIDIChannelAftertouch_Params params {};
		params.Channel = Channel;
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMIDIDeviceOutputController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMIDIDeviceOutputController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MIDIDevice.MIDIDeviceOutputController");
		return ptr;
	}

}


