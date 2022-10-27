/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.UnregisterLuaConsoleCommand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      CommandName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaBlueprintFunctionLibrary::UnregisterLuaConsoleCommand(const class FString& CommandName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.UnregisterLuaConsoleCommand");
		
		ULuaBlueprintFunctionLibrary_UnregisterLuaConsoleCommand_Params params {};
		params.CommandName = CommandName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.SwitchOnLuaValueType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLuaValue                                   LuaValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		ELuaValueType                                      LuaValueTypes                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaBlueprintFunctionLibrary::SwitchOnLuaValueType(const struct FLuaValue& LuaValue, ELuaValueType* LuaValueTypes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.SwitchOnLuaValueType");
		
		ULuaBlueprintFunctionLibrary_SwitchOnLuaValueType_Params params {};
		params.LuaValue = LuaValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LuaValueTypes != nullptr)
			*LuaValueTypes = params.LuaValueTypes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.RegisterLuaConsoleCommand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      CommandName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLuaValue                                   LuaConsoleCommand                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULuaBlueprintFunctionLibrary::RegisterLuaConsoleCommand(const class FString& CommandName, const struct FLuaValue& LuaConsoleCommand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.RegisterLuaConsoleCommand");
		
		ULuaBlueprintFunctionLibrary_RegisterLuaConsoleCommand_Params params {};
		params.CommandName = CommandName;
		params.LuaConsoleCommand = LuaConsoleCommand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueYield
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLuaValue                                   Value                                                      (Parm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FLuaValue>                           Args                                                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void ULuaBlueprintFunctionLibrary::LuaValueYield(const struct FLuaValue& Value, TArray<struct FLuaValue> Args)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueYield");
		
		ULuaBlueprintFunctionLibrary_LuaValueYield_Params params {};
		params.Value = Value;
		params.Args = Args;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueToUTF8
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLuaValue                                   Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FString ULuaBlueprintFunctionLibrary::LuaValueToUTF8(const struct FLuaValue& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueToUTF8");
		
		ULuaBlueprintFunctionLibrary_LuaValueToUTF8_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueToUTF32
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLuaValue                                   Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FString ULuaBlueprintFunctionLibrary::LuaValueToUTF32(const struct FLuaValue& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueToUTF32");
		
		ULuaBlueprintFunctionLibrary_LuaValueToUTF32_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueToUTF16
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLuaValue                                   Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FString ULuaBlueprintFunctionLibrary::LuaValueToUTF16(const struct FLuaValue& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueToUTF16");
		
		ULuaBlueprintFunctionLibrary_LuaValueToUTF16_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueToTransientTexture
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Width                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Height                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLuaValue                                   Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		EPixelFormat                                       PixelFormat                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bDetectFormat                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UTexture2D* ULuaBlueprintFunctionLibrary::LuaValueToTransientTexture(int32_t Width, int32_t Height, const struct FLuaValue& Value, EPixelFormat PixelFormat, bool bDetectFormat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueToTransientTexture");
		
		ULuaBlueprintFunctionLibrary_LuaValueToTransientTexture_Params params {};
		params.Width = Width;
		params.Height = Height;
		params.Value = Value;
		params.PixelFormat = PixelFormat;
		params.bDetectFormat = bDetectFormat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueToTransientSoundWave
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLuaValue                                   Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bLoop                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USoundWave* ULuaBlueprintFunctionLibrary::LuaValueToTransientSoundWave(const struct FLuaValue& Value, bool bLoop)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueToTransientSoundWave");
		
		ULuaBlueprintFunctionLibrary_LuaValueToTransientSoundWave_Params params {};
		params.Value = Value;
		params.bLoop = bLoop;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueToPointer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLuaValue                                   Value                                                      (Parm, NativeAccessSpecifierPublic)
	 */
	int64_t ULuaBlueprintFunctionLibrary::LuaValueToPointer(class UObject* WorldContextObject, class UClass* State, const struct FLuaValue& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueToPointer");
		
		ULuaBlueprintFunctionLibrary_LuaValueToPointer_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.State = State;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueToJson
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLuaValue                                   Value                                                      (Parm, NativeAccessSpecifierPublic)
	 */
	class FString ULuaBlueprintFunctionLibrary::LuaValueToJson(const struct FLuaValue& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueToJson");
		
		ULuaBlueprintFunctionLibrary_LuaValueToJson_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueToHexPointer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLuaValue                                   Value                                                      (Parm, NativeAccessSpecifierPublic)
	 */
	class FString ULuaBlueprintFunctionLibrary::LuaValueToHexPointer(class UObject* WorldContextObject, class UClass* State, const struct FLuaValue& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueToHexPointer");
		
		ULuaBlueprintFunctionLibrary_LuaValueToHexPointer_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.State = State;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueToBlueprintGeneratedClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLuaValue                                   Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class UClass* ULuaBlueprintFunctionLibrary::LuaValueToBlueprintGeneratedClass(const struct FLuaValue& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueToBlueprintGeneratedClass");
		
		ULuaBlueprintFunctionLibrary_LuaValueToBlueprintGeneratedClass_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueToBase64
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLuaValue                                   Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FString ULuaBlueprintFunctionLibrary::LuaValueToBase64(const struct FLuaValue& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueToBase64");
		
		ULuaBlueprintFunctionLibrary_LuaValueToBase64_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueResumeMulti
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLuaValue                                   Value                                                      (Parm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FLuaValue>                           Args                                                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	TArray<struct FLuaValue> ULuaBlueprintFunctionLibrary::LuaValueResumeMulti(const struct FLuaValue& Value, TArray<struct FLuaValue> Args)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueResumeMulti");
		
		ULuaBlueprintFunctionLibrary_LuaValueResumeMulti_Params params {};
		params.Value = Value;
		params.Args = Args;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueLoadObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLuaValue                                   Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class UObject* ULuaBlueprintFunctionLibrary::LuaValueLoadObject(const struct FLuaValue& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueLoadObject");
		
		ULuaBlueprintFunctionLibrary_LuaValueLoadObject_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueLoadClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLuaValue                                   Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bDetectBlueprintGeneratedClass                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UClass* ULuaBlueprintFunctionLibrary::LuaValueLoadClass(const struct FLuaValue& Value, bool bDetectBlueprintGeneratedClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueLoadClass");
		
		ULuaBlueprintFunctionLibrary_LuaValueLoadClass_Params params {};
		params.Value = Value;
		params.bDetectBlueprintGeneratedClass = bDetectBlueprintGeneratedClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueLength
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLuaValue                                   Value                                                      (Parm, NativeAccessSpecifierPublic)
	 */
	int32_t ULuaBlueprintFunctionLibrary::LuaValueLength(const struct FLuaValue& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueLength");
		
		ULuaBlueprintFunctionLibrary_LuaValueLength_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueIsThread
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLuaValue                                   Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool ULuaBlueprintFunctionLibrary::LuaValueIsThread(const struct FLuaValue& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueIsThread");
		
		ULuaBlueprintFunctionLibrary_LuaValueIsThread_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueIsTable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLuaValue                                   Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool ULuaBlueprintFunctionLibrary::LuaValueIsTable(const struct FLuaValue& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueIsTable");
		
		ULuaBlueprintFunctionLibrary_LuaValueIsTable_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueIsString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLuaValue                                   Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool ULuaBlueprintFunctionLibrary::LuaValueIsString(const struct FLuaValue& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueIsString");
		
		ULuaBlueprintFunctionLibrary_LuaValueIsString_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueIsReferencedInLuaRegistry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLuaValue                                   Value                                                      (Parm, NativeAccessSpecifierPublic)
	 */
	bool ULuaBlueprintFunctionLibrary::LuaValueIsReferencedInLuaRegistry(const struct FLuaValue& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueIsReferencedInLuaRegistry");
		
		ULuaBlueprintFunctionLibrary_LuaValueIsReferencedInLuaRegistry_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueIsOwned
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLuaValue                                   Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool ULuaBlueprintFunctionLibrary::LuaValueIsOwned(const struct FLuaValue& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueIsOwned");
		
		ULuaBlueprintFunctionLibrary_LuaValueIsOwned_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueIsNumber
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLuaValue                                   Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool ULuaBlueprintFunctionLibrary::LuaValueIsNumber(const struct FLuaValue& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueIsNumber");
		
		ULuaBlueprintFunctionLibrary_LuaValueIsNumber_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueIsNotNil
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLuaValue                                   Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool ULuaBlueprintFunctionLibrary::LuaValueIsNotNil(const struct FLuaValue& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueIsNotNil");
		
		ULuaBlueprintFunctionLibrary_LuaValueIsNotNil_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueIsNil
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLuaValue                                   Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool ULuaBlueprintFunctionLibrary::LuaValueIsNil(const struct FLuaValue& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueIsNil");
		
		ULuaBlueprintFunctionLibrary_LuaValueIsNil_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueIsInteger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLuaValue                                   Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool ULuaBlueprintFunctionLibrary::LuaValueIsInteger(const struct FLuaValue& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueIsInteger");
		
		ULuaBlueprintFunctionLibrary_LuaValueIsInteger_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueIsFunction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLuaValue                                   Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool ULuaBlueprintFunctionLibrary::LuaValueIsFunction(const struct FLuaValue& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueIsFunction");
		
		ULuaBlueprintFunctionLibrary_LuaValueIsFunction_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueIsBoolean
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLuaValue                                   Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool ULuaBlueprintFunctionLibrary::LuaValueIsBoolean(const struct FLuaValue& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueIsBoolean");
		
		ULuaBlueprintFunctionLibrary_LuaValueIsBoolean_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueGetOwner
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLuaValue                                   Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class UClass* ULuaBlueprintFunctionLibrary::LuaValueGetOwner(const struct FLuaValue& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueGetOwner");
		
		ULuaBlueprintFunctionLibrary_LuaValueGetOwner_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueFromUTF8
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLuaValue ULuaBlueprintFunctionLibrary::LuaValueFromUTF8(const class FString& String)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueFromUTF8");
		
		ULuaBlueprintFunctionLibrary_LuaValueFromUTF8_Params params {};
		params.String = String;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueFromUTF32
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLuaValue ULuaBlueprintFunctionLibrary::LuaValueFromUTF32(const class FString& String)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueFromUTF32");
		
		ULuaBlueprintFunctionLibrary_LuaValueFromUTF32_Params params {};
		params.String = String;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueFromUTF16
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLuaValue ULuaBlueprintFunctionLibrary::LuaValueFromUTF16(const class FString& String)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueFromUTF16");
		
		ULuaBlueprintFunctionLibrary_LuaValueFromUTF16_Params params {};
		params.String = String;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueFromJson
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Json                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLuaValue                                   Value                                                      (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	bool ULuaBlueprintFunctionLibrary::LuaValueFromJson(class UObject* WorldContextObject, class UClass* State, const class FString& Json, struct FLuaValue* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueFromJson");
		
		ULuaBlueprintFunctionLibrary_LuaValueFromJson_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.State = State;
		params.Json = Json;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Value != nullptr)
			*Value = params.Value;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueFromBase64
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Base64                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLuaValue ULuaBlueprintFunctionLibrary::LuaValueFromBase64(const class FString& Base64)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueFromBase64");
		
		ULuaBlueprintFunctionLibrary_LuaValueFromBase64_Params params {};
		params.Base64 = Base64;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueCallMulti
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLuaValue                                   Value                                                      (Parm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FLuaValue>                           Args                                                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	TArray<struct FLuaValue> ULuaBlueprintFunctionLibrary::LuaValueCallMulti(const struct FLuaValue& Value, TArray<struct FLuaValue> Args)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueCallMulti");
		
		ULuaBlueprintFunctionLibrary_LuaValueCallMulti_Params params {};
		params.Value = Value;
		params.Args = Args;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueCallIfNotNil
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLuaValue                                   Value                                                      (Parm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FLuaValue>                           Args                                                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	struct FLuaValue ULuaBlueprintFunctionLibrary::LuaValueCallIfNotNil(const struct FLuaValue& Value, TArray<struct FLuaValue> Args)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueCallIfNotNil");
		
		ULuaBlueprintFunctionLibrary_LuaValueCallIfNotNil_Params params {};
		params.Value = Value;
		params.Args = Args;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueCall
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLuaValue                                   Value                                                      (Parm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FLuaValue>                           Args                                                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	struct FLuaValue ULuaBlueprintFunctionLibrary::LuaValueCall(const struct FLuaValue& Value, TArray<struct FLuaValue> Args)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueCall");
		
		ULuaBlueprintFunctionLibrary_LuaValueCall_Params params {};
		params.Value = Value;
		params.Args = Args;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueArrayMerge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FLuaValue>                           Array1                                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FLuaValue>                           Array2                                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	TArray<struct FLuaValue> ULuaBlueprintFunctionLibrary::LuaValueArrayMerge(TArray<struct FLuaValue> Array1, TArray<struct FLuaValue> Array2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueArrayMerge");
		
		ULuaBlueprintFunctionLibrary_LuaValueArrayMerge_Params params {};
		params.Array1 = Array1;
		params.Array2 = Array2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueArrayAppend
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FLuaValue>                           Array                                                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		struct FLuaValue                                   Value                                                      (Parm, NativeAccessSpecifierPublic)
	 */
	TArray<struct FLuaValue> ULuaBlueprintFunctionLibrary::LuaValueArrayAppend(TArray<struct FLuaValue> Array, const struct FLuaValue& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaValueArrayAppend");
		
		ULuaBlueprintFunctionLibrary_LuaValueArrayAppend_Params params {};
		params.Array = Array;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaThreadGetStatus
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLuaValue                                   Value                                                      (Parm, NativeAccessSpecifierPublic)
	 */
	ELuaThreadStatus ULuaBlueprintFunctionLibrary::LuaThreadGetStatus(const struct FLuaValue& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaThreadGetStatus");
		
		ULuaBlueprintFunctionLibrary_LuaThreadGetStatus_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaThreadGetStackTop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLuaValue                                   Value                                                      (Parm, NativeAccessSpecifierPublic)
	 */
	int32_t ULuaBlueprintFunctionLibrary::LuaThreadGetStackTop(const struct FLuaValue& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaThreadGetStackTop");
		
		ULuaBlueprintFunctionLibrary_LuaThreadGetStackTop_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaTableUnpack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLuaValue                                   InTable                                                    (Parm, NativeAccessSpecifierPublic)
	 */
	TArray<struct FLuaValue> ULuaBlueprintFunctionLibrary::LuaTableUnpack(const struct FLuaValue& InTable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaTableUnpack");
		
		ULuaBlueprintFunctionLibrary_LuaTableUnpack_Params params {};
		params.InTable = InTable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaTableToVector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLuaValue                                   Value                                                      (Parm, NativeAccessSpecifierPublic)
	 */
	struct FVector ULuaBlueprintFunctionLibrary::LuaTableToVector(const struct FLuaValue& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaTableToVector");
		
		ULuaBlueprintFunctionLibrary_LuaTableToVector_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaTableSetMetaTable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLuaValue                                   InTable                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		struct FLuaValue                                   InMetaTable                                                (Parm, NativeAccessSpecifierPublic)
	 */
	struct FLuaValue ULuaBlueprintFunctionLibrary::LuaTableSetMetaTable(const struct FLuaValue& InTable, const struct FLuaValue& InMetaTable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaTableSetMetaTable");
		
		ULuaBlueprintFunctionLibrary_LuaTableSetMetaTable_Params params {};
		params.InTable = InTable;
		params.InMetaTable = InMetaTable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaTableSetField
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLuaValue                                   Table                                                      (Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLuaValue                                   Value                                                      (Parm, NativeAccessSpecifierPublic)
	 */
	struct FLuaValue ULuaBlueprintFunctionLibrary::LuaTableSetField(const struct FLuaValue& Table, const class FString& Key, const struct FLuaValue& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaTableSetField");
		
		ULuaBlueprintFunctionLibrary_LuaTableSetField_Params params {};
		params.Table = Table;
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaTableSetByIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLuaValue                                   Table                                                      (Parm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLuaValue                                   Value                                                      (Parm, NativeAccessSpecifierPublic)
	 */
	struct FLuaValue ULuaBlueprintFunctionLibrary::LuaTableSetByIndex(const struct FLuaValue& Table, int32_t Index, const struct FLuaValue& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaTableSetByIndex");
		
		ULuaBlueprintFunctionLibrary_LuaTableSetByIndex_Params params {};
		params.Table = Table;
		params.Index = Index;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaTableRange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLuaValue                                   InTable                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            First                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Last                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FLuaValue> ULuaBlueprintFunctionLibrary::LuaTableRange(const struct FLuaValue& InTable, int32_t First, int32_t Last)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaTableRange");
		
		ULuaBlueprintFunctionLibrary_LuaTableRange_Params params {};
		params.InTable = InTable;
		params.First = First;
		params.Last = Last;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaTablePack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FLuaValue>                           Values                                                     (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	struct FLuaValue ULuaBlueprintFunctionLibrary::LuaTablePack(class UObject* WorldContextObject, class UClass* State, TArray<struct FLuaValue> Values)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaTablePack");
		
		ULuaBlueprintFunctionLibrary_LuaTablePack_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.State = State;
		params.Values = Values;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaTableMergeUnpack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLuaValue                                   InTable1                                                   (Parm, NativeAccessSpecifierPublic)
	 * 		struct FLuaValue                                   InTable2                                                   (Parm, NativeAccessSpecifierPublic)
	 */
	TArray<struct FLuaValue> ULuaBlueprintFunctionLibrary::LuaTableMergeUnpack(const struct FLuaValue& InTable1, const struct FLuaValue& InTable2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaTableMergeUnpack");
		
		ULuaBlueprintFunctionLibrary_LuaTableMergeUnpack_Params params {};
		params.InTable1 = InTable1;
		params.InTable2 = InTable2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaTableMergePack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FLuaValue>                           Values1                                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FLuaValue>                           Values2                                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	struct FLuaValue ULuaBlueprintFunctionLibrary::LuaTableMergePack(class UObject* WorldContextObject, class UClass* State, TArray<struct FLuaValue> Values1, TArray<struct FLuaValue> Values2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaTableMergePack");
		
		ULuaBlueprintFunctionLibrary_LuaTableMergePack_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.State = State;
		params.Values1 = Values1;
		params.Values2 = Values2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaTableKeyCallWithSelf
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLuaValue                                   InTable                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FLuaValue>                           Args                                                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	struct FLuaValue ULuaBlueprintFunctionLibrary::LuaTableKeyCallWithSelf(const struct FLuaValue& InTable, const class FString& Key, TArray<struct FLuaValue> Args)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaTableKeyCallWithSelf");
		
		ULuaBlueprintFunctionLibrary_LuaTableKeyCallWithSelf_Params params {};
		params.InTable = InTable;
		params.Key = Key;
		params.Args = Args;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaTableKeyCall
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLuaValue                                   InTable                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FLuaValue>                           Args                                                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	struct FLuaValue ULuaBlueprintFunctionLibrary::LuaTableKeyCall(const struct FLuaValue& InTable, const class FString& Key, TArray<struct FLuaValue> Args)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaTableKeyCall");
		
		ULuaBlueprintFunctionLibrary_LuaTableKeyCall_Params params {};
		params.InTable = InTable;
		params.Key = Key;
		params.Args = Args;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaTableIndexCall
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLuaValue                                   InTable                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FLuaValue>                           Args                                                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	struct FLuaValue ULuaBlueprintFunctionLibrary::LuaTableIndexCall(const struct FLuaValue& InTable, int32_t Index, TArray<struct FLuaValue> Args)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaTableIndexCall");
		
		ULuaBlueprintFunctionLibrary_LuaTableIndexCall_Params params {};
		params.InTable = InTable;
		params.Index = Index;
		params.Args = Args;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaTableImplementsAny
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLuaValue                                   Table                                                      (Parm, NativeAccessSpecifierPublic)
	 * 		TArray<class ULuaTableAsset*>                      TableAssets                                                (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool ULuaBlueprintFunctionLibrary::LuaTableImplementsAny(const struct FLuaValue& Table, TArray<class ULuaTableAsset*> TableAssets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaTableImplementsAny");
		
		ULuaBlueprintFunctionLibrary_LuaTableImplementsAny_Params params {};
		params.Table = Table;
		params.TableAssets = TableAssets;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaTableImplementsAll
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLuaValue                                   Table                                                      (Parm, NativeAccessSpecifierPublic)
	 * 		TArray<class ULuaTableAsset*>                      TableAssets                                                (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool ULuaBlueprintFunctionLibrary::LuaTableImplementsAll(const struct FLuaValue& Table, TArray<class ULuaTableAsset*> TableAssets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaTableImplementsAll");
		
		ULuaBlueprintFunctionLibrary_LuaTableImplementsAll_Params params {};
		params.Table = Table;
		params.TableAssets = TableAssets;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaTableImplements
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLuaValue                                   Table                                                      (Parm, NativeAccessSpecifierPublic)
	 * 		class ULuaTableAsset*                              TableAsset                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULuaBlueprintFunctionLibrary::LuaTableImplements(const struct FLuaValue& Table, class ULuaTableAsset* TableAsset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaTableImplements");
		
		ULuaBlueprintFunctionLibrary_LuaTableImplements_Params params {};
		params.Table = Table;
		params.TableAsset = TableAsset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaTableGetValues
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLuaValue                                   Table                                                      (Parm, NativeAccessSpecifierPublic)
	 */
	TArray<struct FLuaValue> ULuaBlueprintFunctionLibrary::LuaTableGetValues(const struct FLuaValue& Table)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaTableGetValues");
		
		ULuaBlueprintFunctionLibrary_LuaTableGetValues_Params params {};
		params.Table = Table;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaTableGetKeys
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLuaValue                                   Table                                                      (Parm, NativeAccessSpecifierPublic)
	 */
	TArray<struct FLuaValue> ULuaBlueprintFunctionLibrary::LuaTableGetKeys(const struct FLuaValue& Table)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaTableGetKeys");
		
		ULuaBlueprintFunctionLibrary_LuaTableGetKeys_Params params {};
		params.Table = Table;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaTableGetField
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLuaValue                                   Table                                                      (Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLuaValue ULuaBlueprintFunctionLibrary::LuaTableGetField(const struct FLuaValue& Table, const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaTableGetField");
		
		ULuaBlueprintFunctionLibrary_LuaTableGetField_Params params {};
		params.Table = Table;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaTableGetByIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLuaValue                                   Table                                                      (Parm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLuaValue ULuaBlueprintFunctionLibrary::LuaTableGetByIndex(const struct FLuaValue& Table, int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaTableGetByIndex");
		
		ULuaBlueprintFunctionLibrary_LuaTableGetByIndex_Params params {};
		params.Table = Table;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaTableFromMap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TMap<class FString, struct FLuaValue>              Map                                                        (Parm, NativeAccessSpecifierPublic)
	 */
	struct FLuaValue ULuaBlueprintFunctionLibrary::LuaTableFromMap(class UObject* WorldContextObject, class UClass* State, TMap<class FString, struct FLuaValue> Map)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaTableFromMap");
		
		ULuaBlueprintFunctionLibrary_LuaTableFromMap_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.State = State;
		params.Map = Map;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaTableFillObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLuaValue                                   InTable                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     InObject                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaBlueprintFunctionLibrary::LuaTableFillObject(const struct FLuaValue& InTable, class UObject* InObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaTableFillObject");
		
		ULuaBlueprintFunctionLibrary_LuaTableFillObject_Params params {};
		params.InTable = InTable;
		params.InObject = InObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaTableAssetToLuaTable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ULuaTableAsset*                              TableAsset                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLuaValue ULuaBlueprintFunctionLibrary::LuaTableAssetToLuaTable(class UObject* WorldContextObject, class UClass* State, class ULuaTableAsset* TableAsset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaTableAssetToLuaTable");
		
		ULuaBlueprintFunctionLibrary_LuaTableAssetToLuaTable_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.State = State;
		params.TableAsset = TableAsset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaStateReload
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaBlueprintFunctionLibrary::LuaStateReload(class UObject* WorldContextObject, class UClass* State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaStateReload");
		
		ULuaBlueprintFunctionLibrary_LuaStateReload_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaStateDestroy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaBlueprintFunctionLibrary::LuaStateDestroy(class UObject* WorldContextObject, class UClass* State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaStateDestroy");
		
		ULuaBlueprintFunctionLibrary_LuaStateDestroy_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaSetUserDataMetaTable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLuaValue                                   MetaTable                                                  (Parm, NativeAccessSpecifierPublic)
	 */
	void ULuaBlueprintFunctionLibrary::LuaSetUserDataMetaTable(class UObject* WorldContextObject, class UClass* State, const struct FLuaValue& MetaTable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaSetUserDataMetaTable");
		
		ULuaBlueprintFunctionLibrary_LuaSetUserDataMetaTable_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.State = State;
		params.MetaTable = MetaTable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaSetGlobal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLuaValue                                   Value                                                      (Parm, NativeAccessSpecifierPublic)
	 */
	void ULuaBlueprintFunctionLibrary::LuaSetGlobal(class UObject* WorldContextObject, class UClass* State, const class FString& Name, const struct FLuaValue& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaSetGlobal");
		
		ULuaBlueprintFunctionLibrary_LuaSetGlobal_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.State = State;
		params.Name = Name;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaRunURL
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TMap<class FString, class FString>                 Headers                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      SecurityHeader                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SignaturePublicExponent                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      SignatureModulus                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Completed                                                  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULuaBlueprintFunctionLibrary::LuaRunURL(class UObject* WorldContextObject, class UClass* State, const class FString& URL, TMap<class FString, class FString> Headers, const class FString& SecurityHeader, const class FString& SignaturePublicExponent, const class FString& SignatureModulus, const class FScriptDelegate& Completed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaRunURL");
		
		ULuaBlueprintFunctionLibrary_LuaRunURL_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.State = State;
		params.URL = URL;
		params.Headers = Headers;
		params.SecurityHeader = SecurityHeader;
		params.SignaturePublicExponent = SignaturePublicExponent;
		params.SignatureModulus = SignatureModulus;
		params.Completed = Completed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaRunString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      CodeString                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      CodePath                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLuaValue ULuaBlueprintFunctionLibrary::LuaRunString(class UObject* WorldContextObject, class UClass* State, const class FString& CodeString, const class FString& CodePath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaRunString");
		
		ULuaBlueprintFunctionLibrary_LuaRunString_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.State = State;
		params.CodeString = CodeString;
		params.CodePath = CodePath;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaRunNonContentFile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIgnoreNonExistent                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLuaValue ULuaBlueprintFunctionLibrary::LuaRunNonContentFile(class UObject* WorldContextObject, class UClass* State, const class FString& Filename, bool bIgnoreNonExistent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaRunNonContentFile");
		
		ULuaBlueprintFunctionLibrary_LuaRunNonContentFile_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.State = State;
		params.Filename = Filename;
		params.bIgnoreNonExistent = bIgnoreNonExistent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaRunFile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIgnoreNonExistent                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLuaValue ULuaBlueprintFunctionLibrary::LuaRunFile(class UObject* WorldContextObject, class UClass* State, const class FString& Filename, bool bIgnoreNonExistent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaRunFile");
		
		ULuaBlueprintFunctionLibrary_LuaRunFile_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.State = State;
		params.Filename = Filename;
		params.bIgnoreNonExistent = bIgnoreNonExistent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaRunCodeAsset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ULuaCode*                                    CodeAsset                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLuaValue ULuaBlueprintFunctionLibrary::LuaRunCodeAsset(class UObject* WorldContextObject, class UClass* State, class ULuaCode* CodeAsset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaRunCodeAsset");
		
		ULuaBlueprintFunctionLibrary_LuaRunCodeAsset_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.State = State;
		params.CodeAsset = CodeAsset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaRunByteCode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              ByteCode                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      CodePath                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLuaValue ULuaBlueprintFunctionLibrary::LuaRunByteCode(class UObject* WorldContextObject, class UClass* State, TArray<unsigned char> ByteCode, const class FString& CodePath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaRunByteCode");
		
		ULuaBlueprintFunctionLibrary_LuaRunByteCode_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.State = State;
		params.ByteCode = ByteCode;
		params.CodePath = CodePath;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaNewLuaUserDataObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      UserDataObjectClass                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTrackObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLuaValue ULuaBlueprintFunctionLibrary::LuaNewLuaUserDataObject(class UObject* WorldContextObject, class UClass* State, class UClass* UserDataObjectClass, bool bTrackObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaNewLuaUserDataObject");
		
		ULuaBlueprintFunctionLibrary_LuaNewLuaUserDataObject_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.State = State;
		params.UserDataObjectClass = UserDataObjectClass;
		params.bTrackObject = bTrackObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaLoadPakFile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Mountpoint                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FLuaValue>                           Assets                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      ContentPath                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      AssetRegistryPath                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULuaBlueprintFunctionLibrary::LuaLoadPakFile(const class FString& Filename, const class FString& Mountpoint, TArray<struct FLuaValue>* Assets, const class FString& ContentPath, const class FString& AssetRegistryPath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaLoadPakFile");
		
		ULuaBlueprintFunctionLibrary_LuaLoadPakFile_Params params {};
		params.Filename = Filename;
		params.Mountpoint = Mountpoint;
		params.ContentPath = ContentPath;
		params.AssetRegistryPath = AssetRegistryPath;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Assets != nullptr)
			*Assets = params.Assets;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaHttpRequest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Method                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TMap<class FString, class FString>                 Headers                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		struct FLuaValue                                   Body                                                       (Parm, NativeAccessSpecifierPublic)
	 * 		struct FLuaValue                                   Context                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              ResponseReceived                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Error                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULuaBlueprintFunctionLibrary::LuaHttpRequest(class UObject* WorldContextObject, class UClass* State, const class FString& Method, const class FString& URL, TMap<class FString, class FString> Headers, const struct FLuaValue& Body, const struct FLuaValue& Context, const class FScriptDelegate& ResponseReceived, const class FScriptDelegate& Error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaHttpRequest");
		
		ULuaBlueprintFunctionLibrary_LuaHttpRequest_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.State = State;
		params.Method = Method;
		params.URL = URL;
		params.Headers = Headers;
		params.Body = Body;
		params.Context = Context;
		params.ResponseReceived = ResponseReceived;
		params.Error = Error;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaGlobalCallValueMulti
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLuaValue                                   Value                                                      (Parm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FLuaValue>                           Args                                                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	TArray<struct FLuaValue> ULuaBlueprintFunctionLibrary::LuaGlobalCallValueMulti(class UObject* WorldContextObject, class UClass* State, const struct FLuaValue& Value, TArray<struct FLuaValue> Args)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaGlobalCallValueMulti");
		
		ULuaBlueprintFunctionLibrary_LuaGlobalCallValueMulti_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.State = State;
		params.Value = Value;
		params.Args = Args;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaGlobalCallValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLuaValue                                   Value                                                      (Parm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FLuaValue>                           Args                                                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	struct FLuaValue ULuaBlueprintFunctionLibrary::LuaGlobalCallValue(class UObject* WorldContextObject, class UClass* State, const struct FLuaValue& Value, TArray<struct FLuaValue> Args)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaGlobalCallValue");
		
		ULuaBlueprintFunctionLibrary_LuaGlobalCallValue_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.State = State;
		params.Value = Value;
		params.Args = Args;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaGlobalCallMulti
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FLuaValue>                           Args                                                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	TArray<struct FLuaValue> ULuaBlueprintFunctionLibrary::LuaGlobalCallMulti(class UObject* WorldContextObject, class UClass* State, const class FString& Name, TArray<struct FLuaValue> Args)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaGlobalCallMulti");
		
		ULuaBlueprintFunctionLibrary_LuaGlobalCallMulti_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.State = State;
		params.Name = Name;
		params.Args = Args;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaGlobalCall
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FLuaValue>                           Args                                                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	struct FLuaValue ULuaBlueprintFunctionLibrary::LuaGlobalCall(class UObject* WorldContextObject, class UClass* State, const class FString& Name, TArray<struct FLuaValue> Args)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaGlobalCall");
		
		ULuaBlueprintFunctionLibrary_LuaGlobalCall_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.State = State;
		params.Name = Name;
		params.Args = Args;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaGetUsedMemory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t ULuaBlueprintFunctionLibrary::LuaGetUsedMemory(class UObject* WorldContextObject, class UClass* State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaGetUsedMemory");
		
		ULuaBlueprintFunctionLibrary_LuaGetUsedMemory_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaGetTop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t ULuaBlueprintFunctionLibrary::LuaGetTop(class UObject* WorldContextObject, class UClass* State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaGetTop");
		
		ULuaBlueprintFunctionLibrary_LuaGetTop_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaGetState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class ULuaState* ULuaBlueprintFunctionLibrary::LuaGetState(class UObject* WorldContextObject, class UClass* State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaGetState");
		
		ULuaBlueprintFunctionLibrary_LuaGetState_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaGetGlobal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLuaValue ULuaBlueprintFunctionLibrary::LuaGetGlobal(class UObject* WorldContextObject, class UClass* State, const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaGetGlobal");
		
		ULuaBlueprintFunctionLibrary_LuaGetGlobal_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.State = State;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaGCStop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaBlueprintFunctionLibrary::LuaGCStop(class UObject* WorldContextObject, class UClass* State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaGCStop");
		
		ULuaBlueprintFunctionLibrary_LuaGCStop_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaGCRestart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaBlueprintFunctionLibrary::LuaGCRestart(class UObject* WorldContextObject, class UClass* State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaGCRestart");
		
		ULuaBlueprintFunctionLibrary_LuaGCRestart_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaGCCollect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaBlueprintFunctionLibrary::LuaGCCollect(class UObject* WorldContextObject, class UClass* State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaGCCollect");
		
		ULuaBlueprintFunctionLibrary_LuaGCCollect_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaCreateUFunction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     InObject                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      FunctionName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLuaValue ULuaBlueprintFunctionLibrary::LuaCreateUFunction(class UObject* InObject, const class FString& FunctionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaCreateUFunction");
		
		ULuaBlueprintFunctionLibrary_LuaCreateUFunction_Params params {};
		params.InObject = InObject;
		params.FunctionName = FunctionName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaCreateThread
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLuaValue                                   Value                                                      (Parm, NativeAccessSpecifierPublic)
	 */
	struct FLuaValue ULuaBlueprintFunctionLibrary::LuaCreateThread(class UObject* WorldContextObject, class UClass* State, const struct FLuaValue& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaCreateThread");
		
		ULuaBlueprintFunctionLibrary_LuaCreateThread_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.State = State;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaCreateTable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLuaValue ULuaBlueprintFunctionLibrary::LuaCreateTable(class UObject* WorldContextObject, class UClass* State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaCreateTable");
		
		ULuaBlueprintFunctionLibrary_LuaCreateTable_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaCreateString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLuaValue ULuaBlueprintFunctionLibrary::LuaCreateString(const class FString& String)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaCreateString");
		
		ULuaBlueprintFunctionLibrary_LuaCreateString_Params params {};
		params.String = String;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaCreateObjectInState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     InObject                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLuaValue ULuaBlueprintFunctionLibrary::LuaCreateObjectInState(class UObject* WorldContextObject, class UClass* State, class UObject* InObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaCreateObjectInState");
		
		ULuaBlueprintFunctionLibrary_LuaCreateObjectInState_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.State = State;
		params.InObject = InObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaCreateObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     InObject                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLuaValue ULuaBlueprintFunctionLibrary::LuaCreateObject(class UObject* InObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaCreateObject");
		
		ULuaBlueprintFunctionLibrary_LuaCreateObject_Params params {};
		params.InObject = InObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaCreateNumber
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLuaValue ULuaBlueprintFunctionLibrary::LuaCreateNumber(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaCreateNumber");
		
		ULuaBlueprintFunctionLibrary_LuaCreateNumber_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaCreateNil
	 * 		Flags  -> ()
	 */
	struct FLuaValue ULuaBlueprintFunctionLibrary::LuaCreateNil()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaCreateNil");
		
		ULuaBlueprintFunctionLibrary_LuaCreateNil_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaCreateLazyTable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLuaValue ULuaBlueprintFunctionLibrary::LuaCreateLazyTable(class UObject* WorldContextObject, class UClass* State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaCreateLazyTable");
		
		ULuaBlueprintFunctionLibrary_LuaCreateLazyTable_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaCreateInteger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLuaValue ULuaBlueprintFunctionLibrary::LuaCreateInteger(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaCreateInteger");
		
		ULuaBlueprintFunctionLibrary_LuaCreateInteger_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaCreateBool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInBool                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLuaValue ULuaBlueprintFunctionLibrary::LuaCreateBool(bool bInBool)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaCreateBool");
		
		ULuaBlueprintFunctionLibrary_LuaCreateBool_Params params {};
		params.bInBool = bInBool;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.LuaComponentGetField
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLuaValue                                   LuaComponent                                               (Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLuaValue ULuaBlueprintFunctionLibrary::LuaComponentGetField(const struct FLuaValue& LuaComponent, const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.LuaComponentGetField");
		
		ULuaBlueprintFunctionLibrary_LuaComponentGetField_Params params {};
		params.LuaComponent = LuaComponent;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.GetLuaReflectionType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     InObject                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ELuaReflectionType                                 LuaReflectionTypes                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaBlueprintFunctionLibrary::GetLuaReflectionType(class UObject* InObject, const class FString& Name, ELuaReflectionType* LuaReflectionTypes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.GetLuaReflectionType");
		
		ULuaBlueprintFunctionLibrary_GetLuaReflectionType_Params params {};
		params.InObject = InObject;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LuaReflectionTypes != nullptr)
			*LuaReflectionTypes = params.LuaReflectionTypes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.GetLuaComponentByStateAsLuaValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLuaValue ULuaBlueprintFunctionLibrary::GetLuaComponentByStateAsLuaValue(class AActor* Actor, class UClass* State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.GetLuaComponentByStateAsLuaValue");
		
		ULuaBlueprintFunctionLibrary_GetLuaComponentByStateAsLuaValue_Params params {};
		params.Actor = Actor;
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.GetLuaComponentByStateAndNameAsLuaValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLuaValue ULuaBlueprintFunctionLibrary::GetLuaComponentByStateAndNameAsLuaValue(class AActor* Actor, class UClass* State, const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.GetLuaComponentByStateAndNameAsLuaValue");
		
		ULuaBlueprintFunctionLibrary_GetLuaComponentByStateAndNameAsLuaValue_Params params {};
		params.Actor = Actor;
		params.State = State;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.GetLuaComponentByNameAsLuaValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLuaValue ULuaBlueprintFunctionLibrary::GetLuaComponentByNameAsLuaValue(class AActor* Actor, const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.GetLuaComponentByNameAsLuaValue");
		
		ULuaBlueprintFunctionLibrary_GetLuaComponentByNameAsLuaValue_Params params {};
		params.Actor = Actor;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.GetLuaComponentAsLuaValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLuaValue ULuaBlueprintFunctionLibrary::GetLuaComponentAsLuaValue(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.GetLuaComponentAsLuaValue");
		
		ULuaBlueprintFunctionLibrary_GetLuaComponentAsLuaValue_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.Conv_TextToLuaValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FLuaValue ULuaBlueprintFunctionLibrary::Conv_TextToLuaValue(const class FText& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.Conv_TextToLuaValue");
		
		ULuaBlueprintFunctionLibrary_Conv_TextToLuaValue_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.Conv_StringToLuaValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLuaValue ULuaBlueprintFunctionLibrary::Conv_StringToLuaValue(const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.Conv_StringToLuaValue");
		
		ULuaBlueprintFunctionLibrary_Conv_StringToLuaValue_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.Conv_ObjectToLuaValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLuaValue ULuaBlueprintFunctionLibrary::Conv_ObjectToLuaValue(class UObject* Object)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.Conv_ObjectToLuaValue");
		
		ULuaBlueprintFunctionLibrary_Conv_ObjectToLuaValue_Params params {};
		params.Object = Object;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.Conv_NameToLuaValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLuaValue ULuaBlueprintFunctionLibrary::Conv_NameToLuaValue(const class FName& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.Conv_NameToLuaValue");
		
		ULuaBlueprintFunctionLibrary_Conv_NameToLuaValue_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.Conv_LuaValueToText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLuaValue                                   Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FText ULuaBlueprintFunctionLibrary::Conv_LuaValueToText(const struct FLuaValue& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.Conv_LuaValueToText");
		
		ULuaBlueprintFunctionLibrary_Conv_LuaValueToText_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.Conv_LuaValueToString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLuaValue                                   Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FString ULuaBlueprintFunctionLibrary::Conv_LuaValueToString(const struct FLuaValue& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.Conv_LuaValueToString");
		
		ULuaBlueprintFunctionLibrary_Conv_LuaValueToString_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.Conv_LuaValueToObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLuaValue                                   Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class UObject* ULuaBlueprintFunctionLibrary::Conv_LuaValueToObject(const struct FLuaValue& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.Conv_LuaValueToObject");
		
		ULuaBlueprintFunctionLibrary_Conv_LuaValueToObject_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.Conv_LuaValueToName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLuaValue                                   Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FName ULuaBlueprintFunctionLibrary::Conv_LuaValueToName(const struct FLuaValue& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.Conv_LuaValueToName");
		
		ULuaBlueprintFunctionLibrary_Conv_LuaValueToName_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.Conv_LuaValueToInt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLuaValue                                   Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	int32_t ULuaBlueprintFunctionLibrary::Conv_LuaValueToInt(const struct FLuaValue& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.Conv_LuaValueToInt");
		
		ULuaBlueprintFunctionLibrary_Conv_LuaValueToInt_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.Conv_LuaValueToFVector
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLuaValue                                   Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FVector ULuaBlueprintFunctionLibrary::Conv_LuaValueToFVector(const struct FLuaValue& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.Conv_LuaValueToFVector");
		
		ULuaBlueprintFunctionLibrary_Conv_LuaValueToFVector_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.Conv_LuaValueToFloat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLuaValue                                   Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	float ULuaBlueprintFunctionLibrary::Conv_LuaValueToFloat(const struct FLuaValue& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.Conv_LuaValueToFloat");
		
		ULuaBlueprintFunctionLibrary_Conv_LuaValueToFloat_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.Conv_LuaValueToClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLuaValue                                   Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class UClass* ULuaBlueprintFunctionLibrary::Conv_LuaValueToClass(const struct FLuaValue& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.Conv_LuaValueToClass");
		
		ULuaBlueprintFunctionLibrary_Conv_LuaValueToClass_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.Conv_LuaValueToBool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLuaValue                                   Value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool ULuaBlueprintFunctionLibrary::Conv_LuaValueToBool(const struct FLuaValue& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.Conv_LuaValueToBool");
		
		ULuaBlueprintFunctionLibrary_Conv_LuaValueToBool_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.Conv_IntToLuaValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLuaValue ULuaBlueprintFunctionLibrary::Conv_IntToLuaValue(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.Conv_IntToLuaValue");
		
		ULuaBlueprintFunctionLibrary_Conv_IntToLuaValue_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.Conv_FloatToLuaValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLuaValue ULuaBlueprintFunctionLibrary::Conv_FloatToLuaValue(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.Conv_FloatToLuaValue");
		
		ULuaBlueprintFunctionLibrary_Conv_FloatToLuaValue_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.Conv_BoolToLuaValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLuaValue ULuaBlueprintFunctionLibrary::Conv_BoolToLuaValue(bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.Conv_BoolToLuaValue");
		
		ULuaBlueprintFunctionLibrary_Conv_BoolToLuaValue_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintFunctionLibrary.AssignLuaValueToLuaState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLuaValue                                   Value                                                      (Parm, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLuaValue ULuaBlueprintFunctionLibrary::AssignLuaValueToLuaState(class UObject* WorldContextObject, const struct FLuaValue& Value, class UClass* State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintFunctionLibrary.AssignLuaValueToLuaState");
		
		ULuaBlueprintFunctionLibrary_AssignLuaValueToLuaState_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Value = Value;
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULuaBlueprintFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULuaBlueprintFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LuaMachine.LuaBlueprintFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintPackage.ReceiveInit
	 * 		Flags  -> ()
	 */
	void ULuaBlueprintPackage::ReceiveInit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintPackage.ReceiveInit");
		
		ULuaBlueprintPackage_ReceiveInit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintPackage.GetSelfLuaTable
	 * 		Flags  -> ()
	 */
	struct FLuaValue ULuaBlueprintPackage::GetSelfLuaTable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintPackage.GetSelfLuaTable");
		
		ULuaBlueprintPackage_GetSelfLuaTable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaBlueprintPackage.GetLuaState
	 * 		Flags  -> ()
	 */
	class UClass* ULuaBlueprintPackage::GetLuaState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaBlueprintPackage.GetLuaState");
		
		ULuaBlueprintPackage_GetLuaState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULuaBlueprintPackage.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULuaBlueprintPackage::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LuaMachine.LuaBlueprintPackage");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULuaCode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULuaCode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LuaMachine.LuaCode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaComponent.ReceiveLuaMetaNewIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLuaValue                                   Key                                                        (Parm, NativeAccessSpecifierPublic)
	 * 		struct FLuaValue                                   Value                                                      (Parm, NativeAccessSpecifierPublic)
	 */
	bool ULuaComponent::ReceiveLuaMetaNewIndex(const struct FLuaValue& Key, const struct FLuaValue& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaComponent.ReceiveLuaMetaNewIndex");
		
		ULuaComponent_ReceiveLuaMetaNewIndex_Params params {};
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaComponent.ReceiveLuaMetaIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLuaValue                                   Key                                                        (Parm, NativeAccessSpecifierPublic)
	 */
	struct FLuaValue ULuaComponent::ReceiveLuaMetaIndex(const struct FLuaValue& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaComponent.ReceiveLuaMetaIndex");
		
		ULuaComponent_ReceiveLuaMetaIndex_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaComponent.LuaSetField
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLuaValue                                   Value                                                      (Parm, NativeAccessSpecifierPublic)
	 */
	void ULuaComponent::LuaSetField(const class FString& Name, const struct FLuaValue& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaComponent.LuaSetField");
		
		ULuaComponent_LuaSetField_Params params {};
		params.Name = Name;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaComponent.LuaGetField
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLuaValue ULuaComponent::LuaGetField(const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaComponent.LuaGetField");
		
		ULuaComponent_LuaGetField_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaComponent.LuaComponentGetState
	 * 		Flags  -> ()
	 */
	class ULuaState* ULuaComponent::LuaComponentGetState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaComponent.LuaComponentGetState");
		
		ULuaComponent_LuaComponentGetState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaComponent.LuaCallValueMultiIfNotNil
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLuaValue                                   Value                                                      (Parm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FLuaValue>                           Args                                                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	TArray<struct FLuaValue> ULuaComponent::LuaCallValueMultiIfNotNil(const struct FLuaValue& Value, TArray<struct FLuaValue> Args)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaComponent.LuaCallValueMultiIfNotNil");
		
		ULuaComponent_LuaCallValueMultiIfNotNil_Params params {};
		params.Value = Value;
		params.Args = Args;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaComponent.LuaCallValueMulti
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLuaValue                                   Value                                                      (Parm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FLuaValue>                           Args                                                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	TArray<struct FLuaValue> ULuaComponent::LuaCallValueMulti(const struct FLuaValue& Value, TArray<struct FLuaValue> Args)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaComponent.LuaCallValueMulti");
		
		ULuaComponent_LuaCallValueMulti_Params params {};
		params.Value = Value;
		params.Args = Args;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaComponent.LuaCallValueIfNotNil
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLuaValue                                   Value                                                      (Parm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FLuaValue>                           Args                                                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	struct FLuaValue ULuaComponent::LuaCallValueIfNotNil(const struct FLuaValue& Value, TArray<struct FLuaValue> Args)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaComponent.LuaCallValueIfNotNil");
		
		ULuaComponent_LuaCallValueIfNotNil_Params params {};
		params.Value = Value;
		params.Args = Args;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaComponent.LuaCallValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLuaValue                                   Value                                                      (Parm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FLuaValue>                           Args                                                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	struct FLuaValue ULuaComponent::LuaCallValue(const struct FLuaValue& Value, TArray<struct FLuaValue> Args)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaComponent.LuaCallValue");
		
		ULuaComponent_LuaCallValue_Params params {};
		params.Value = Value;
		params.Args = Args;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaComponent.LuaCallTableKeyMulti
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLuaValue                                   InTable                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FLuaValue>                           Args                                                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	TArray<struct FLuaValue> ULuaComponent::LuaCallTableKeyMulti(const struct FLuaValue& InTable, const class FString& Key, TArray<struct FLuaValue> Args)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaComponent.LuaCallTableKeyMulti");
		
		ULuaComponent_LuaCallTableKeyMulti_Params params {};
		params.InTable = InTable;
		params.Key = Key;
		params.Args = Args;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaComponent.LuaCallTableKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLuaValue                                   InTable                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FLuaValue>                           Args                                                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	struct FLuaValue ULuaComponent::LuaCallTableKey(const struct FLuaValue& InTable, const class FString& Key, TArray<struct FLuaValue> Args)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaComponent.LuaCallTableKey");
		
		ULuaComponent_LuaCallTableKey_Params params {};
		params.InTable = InTable;
		params.Key = Key;
		params.Args = Args;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaComponent.LuaCallTableIndexMulti
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLuaValue                                   InTable                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FLuaValue>                           Args                                                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	TArray<struct FLuaValue> ULuaComponent::LuaCallTableIndexMulti(const struct FLuaValue& InTable, int32_t Index, TArray<struct FLuaValue> Args)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaComponent.LuaCallTableIndexMulti");
		
		ULuaComponent_LuaCallTableIndexMulti_Params params {};
		params.InTable = InTable;
		params.Index = Index;
		params.Args = Args;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaComponent.LuaCallTableIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLuaValue                                   InTable                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FLuaValue>                           Args                                                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	struct FLuaValue ULuaComponent::LuaCallTableIndex(const struct FLuaValue& InTable, int32_t Index, TArray<struct FLuaValue> Args)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaComponent.LuaCallTableIndex");
		
		ULuaComponent_LuaCallTableIndex_Params params {};
		params.InTable = InTable;
		params.Index = Index;
		params.Args = Args;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaComponent.LuaCallFunctionMulti
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FLuaValue>                           Args                                                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bGlobal                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FLuaValue> ULuaComponent::LuaCallFunctionMulti(const class FString& Name, TArray<struct FLuaValue> Args, bool bGlobal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaComponent.LuaCallFunctionMulti");
		
		ULuaComponent_LuaCallFunctionMulti_Params params {};
		params.Name = Name;
		params.Args = Args;
		params.bGlobal = bGlobal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaComponent.LuaCallFunction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FLuaValue>                           Args                                                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bGlobal                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLuaValue ULuaComponent::LuaCallFunction(const class FString& Name, TArray<struct FLuaValue> Args, bool bGlobal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaComponent.LuaCallFunction");
		
		ULuaComponent_LuaCallFunction_Params params {};
		params.Name = Name;
		params.Args = Args;
		params.bGlobal = bGlobal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULuaComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULuaComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LuaMachine.LuaComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaDelegate.LuaDelegateFunction
	 * 		Flags  -> ()
	 */
	void ULuaDelegate::LuaDelegateFunction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaDelegate.LuaDelegateFunction");
		
		ULuaDelegate_LuaDelegateFunction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULuaDelegate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULuaDelegate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LuaMachine.LuaDelegate");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULuaGlobalNameComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULuaGlobalNameComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LuaMachine.LuaGlobalNameComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaMultiLineEditableTextBox.SetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	void ULuaMultiLineEditableTextBox::SetText(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaMultiLineEditableTextBox.SetText");
		
		ULuaMultiLineEditableTextBox_SetText_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaMultiLineEditableTextBox.MoveCursorUp
	 * 		Flags  -> ()
	 */
	void ULuaMultiLineEditableTextBox::MoveCursorUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaMultiLineEditableTextBox.MoveCursorUp");
		
		ULuaMultiLineEditableTextBox_MoveCursorUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaMultiLineEditableTextBox.MoveCursorRight
	 * 		Flags  -> ()
	 */
	void ULuaMultiLineEditableTextBox::MoveCursorRight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaMultiLineEditableTextBox.MoveCursorRight");
		
		ULuaMultiLineEditableTextBox_MoveCursorRight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaMultiLineEditableTextBox.MoveCursorLeft
	 * 		Flags  -> ()
	 */
	void ULuaMultiLineEditableTextBox::MoveCursorLeft()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaMultiLineEditableTextBox.MoveCursorLeft");
		
		ULuaMultiLineEditableTextBox_MoveCursorLeft_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaMultiLineEditableTextBox.MoveCursorDown
	 * 		Flags  -> ()
	 */
	void ULuaMultiLineEditableTextBox::MoveCursorDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaMultiLineEditableTextBox.MoveCursorDown");
		
		ULuaMultiLineEditableTextBox_MoveCursorDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaMultiLineEditableTextBox.GetText
	 * 		Flags  -> ()
	 */
	class FText ULuaMultiLineEditableTextBox::GetText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaMultiLineEditableTextBox.GetText");
		
		ULuaMultiLineEditableTextBox_GetText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaMultiLineEditableTextBox.GetSelectedText
	 * 		Flags  -> ()
	 */
	class FText ULuaMultiLineEditableTextBox::GetSelectedText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaMultiLineEditableTextBox.GetSelectedText");
		
		ULuaMultiLineEditableTextBox_GetSelectedText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaMultiLineEditableTextBox.GetCursorLine
	 * 		Flags  -> ()
	 */
	int32_t ULuaMultiLineEditableTextBox::GetCursorLine()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaMultiLineEditableTextBox.GetCursorLine");
		
		ULuaMultiLineEditableTextBox_GetCursorLine_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaMultiLineEditableTextBox.GetCursorColumn
	 * 		Flags  -> ()
	 */
	int32_t ULuaMultiLineEditableTextBox::GetCursorColumn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaMultiLineEditableTextBox.GetCursorColumn");
		
		ULuaMultiLineEditableTextBox_GetCursorColumn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaMultiLineEditableTextBox.CursorGoTo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Line                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Column                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaMultiLineEditableTextBox::CursorGoTo(int32_t Line, int32_t Column)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaMultiLineEditableTextBox.CursorGoTo");
		
		ULuaMultiLineEditableTextBox_CursorGoTo_Params params {};
		params.Line = Line;
		params.Column = Column;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULuaMultiLineEditableTextBox.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULuaMultiLineEditableTextBox::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LuaMachine.LuaMultiLineEditableTextBox");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaState.ToByteCode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Code                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      CodePath                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorString                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<unsigned char> ULuaState::ToByteCode(const class FString& Code, const class FString& CodePath, class FString* ErrorString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaState.ToByteCode");
		
		ULuaState_ToByteCode_Params params {};
		params.Code = Code;
		params.CodePath = CodePath;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ErrorString != nullptr)
			*ErrorString = params.ErrorString;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaState.StructToLuaTable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UScriptStruct*                               InScriptStruct                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              StructData                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FLuaValue ULuaState::StructToLuaTable(class UScriptStruct* InScriptStruct, TArray<unsigned char> StructData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaState.StructToLuaTable");
		
		ULuaState_StructToLuaTable_Params params {};
		params.InScriptStruct = InScriptStruct;
		params.StructData = StructData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaState.SetPropertyFromLuaValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     InObject                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      PropertyName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLuaValue                                   Value                                                      (Parm, NativeAccessSpecifierPublic)
	 */
	bool ULuaState::SetPropertyFromLuaValue(class UObject* InObject, const class FString& PropertyName, const struct FLuaValue& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaState.SetPropertyFromLuaValue");
		
		ULuaState_SetPropertyFromLuaValue_Params params {};
		params.InObject = InObject;
		params.PropertyName = PropertyName;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaState.SetLuaUserDataField
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLuaValue                                   UserData                                                   (Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLuaValue                                   Value                                                      (Parm, NativeAccessSpecifierPublic)
	 */
	void ULuaState::SetLuaUserDataField(const struct FLuaValue& UserData, const class FString& Key, const struct FLuaValue& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaState.SetLuaUserDataField");
		
		ULuaState_SetLuaUserDataField_Params params {};
		params.UserData = UserData;
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaState.ReceiveLuaStatePreInitialized
	 * 		Flags  -> ()
	 */
	void ULuaState::ReceiveLuaStatePreInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaState.ReceiveLuaStatePreInitialized");
		
		ULuaState_ReceiveLuaStatePreInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaState.ReceiveLuaStateInitialized
	 * 		Flags  -> ()
	 */
	void ULuaState::ReceiveLuaStateInitialized()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaState.ReceiveLuaStateInitialized");
		
		ULuaState_ReceiveLuaStateInitialized_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaState.ReceiveLuaReturnHook
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLuaDebug                                   LuaDebug                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULuaState::ReceiveLuaReturnHook(const struct FLuaDebug& LuaDebug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaState.ReceiveLuaReturnHook");
		
		ULuaState_ReceiveLuaReturnHook_Params params {};
		params.LuaDebug = LuaDebug;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaState.ReceiveLuaLineHook
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLuaDebug                                   LuaDebug                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULuaState::ReceiveLuaLineHook(const struct FLuaDebug& LuaDebug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaState.ReceiveLuaLineHook");
		
		ULuaState_ReceiveLuaLineHook_Params params {};
		params.LuaDebug = LuaDebug;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaState.ReceiveLuaLevelRemovedFromWorld
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ULevel*                                      Level                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UWorld*                                      World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaState::ReceiveLuaLevelRemovedFromWorld(class ULevel* Level, class UWorld* World)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaState.ReceiveLuaLevelRemovedFromWorld");
		
		ULuaState_ReceiveLuaLevelRemovedFromWorld_Params params {};
		params.Level = Level;
		params.World = World;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaState.ReceiveLuaLevelAddedToWorld
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ULevel*                                      Level                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UWorld*                                      World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaState::ReceiveLuaLevelAddedToWorld(class ULevel* Level, class UWorld* World)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaState.ReceiveLuaLevelAddedToWorld");
		
		ULuaState_ReceiveLuaLevelAddedToWorld_Params params {};
		params.Level = Level;
		params.World = World;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaState.ReceiveLuaError
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Message                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuaState::ReceiveLuaError(const class FString& Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaState.ReceiveLuaError");
		
		ULuaState_ReceiveLuaError_Params params {};
		params.Message = Message;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaState.ReceiveLuaCallHook
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLuaDebug                                   LuaDebug                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULuaState::ReceiveLuaCallHook(const struct FLuaDebug& LuaDebug)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaState.ReceiveLuaCallHook");
		
		ULuaState_ReceiveLuaCallHook_Params params {};
		params.LuaDebug = LuaDebug;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaState.NewLuaUserDataObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      LuaUserDataObjectClass                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTrackObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLuaValue ULuaState::NewLuaUserDataObject(class UClass* LuaUserDataObjectClass, bool bTrackObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaState.NewLuaUserDataObject");
		
		ULuaState_NewLuaUserDataObject_Params params {};
		params.LuaUserDataObjectClass = LuaUserDataObjectClass;
		params.bTrackObject = bTrackObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaState.LuaGetLocals
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Level                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TMap<class FString, struct FLuaValue> ULuaState::LuaGetLocals(int32_t Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaState.LuaGetLocals");
		
		ULuaState_LuaGetLocals_Params params {};
		params.Level = Level;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaState.LuaGetInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Level                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLuaDebug ULuaState::LuaGetInfo(int32_t Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaState.LuaGetInfo");
		
		ULuaState_LuaGetInfo_Params params {};
		params.Level = Level;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaState.GetSelfLuaState
	 * 		Flags  -> ()
	 */
	class UClass* ULuaState::GetSelfLuaState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaState.GetSelfLuaState");
		
		ULuaState_GetSelfLuaState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaState.GetLuaValueFromProperty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     InObject                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      PropertyName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLuaValue ULuaState::GetLuaValueFromProperty(class UObject* InObject, const class FString& PropertyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaState.GetLuaValueFromProperty");
		
		ULuaState_GetLuaValueFromProperty_Params params {};
		params.InObject = InObject;
		params.PropertyName = PropertyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaState.GetLuaUserDataField
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLuaValue                                   UserData                                                   (Parm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Key                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLuaValue ULuaState::GetLuaUserDataField(const struct FLuaValue& UserData, const class FString& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaState.GetLuaUserDataField");
		
		ULuaState_GetLuaUserDataField_Params params {};
		params.UserData = UserData;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaState.GetLuaBlueprintPackageTable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PackageName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLuaValue ULuaState::GetLuaBlueprintPackageTable(const class FString& PackageName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaState.GetLuaBlueprintPackageTable");
		
		ULuaState_GetLuaBlueprintPackageTable_Params params {};
		params.PackageName = PackageName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULuaState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULuaState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LuaMachine.LuaState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULuaTableAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULuaTableAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LuaMachine.LuaTableAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaUserDataObject.UFunctionToLuaValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      FunctionName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLuaValue ULuaUserDataObject::UFunctionToLuaValue(const class FString& FunctionName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaUserDataObject.UFunctionToLuaValue");
		
		ULuaUserDataObject_UFunctionToLuaValue_Params params {};
		params.FunctionName = FunctionName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaUserDataObject.ReceiveLuaUserDataTableInit
	 * 		Flags  -> ()
	 */
	void ULuaUserDataObject::ReceiveLuaUserDataTableInit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaUserDataObject.ReceiveLuaUserDataTableInit");
		
		ULuaUserDataObject_ReceiveLuaUserDataTableInit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaUserDataObject.ReceiveLuaMetaIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLuaValue                                   Key                                                        (Parm, NativeAccessSpecifierPublic)
	 */
	struct FLuaValue ULuaUserDataObject::ReceiveLuaMetaIndex(const struct FLuaValue& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaUserDataObject.ReceiveLuaMetaIndex");
		
		ULuaUserDataObject_ReceiveLuaMetaIndex_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaUserDataObject.ReceiveLuaGC
	 * 		Flags  -> ()
	 */
	void ULuaUserDataObject::ReceiveLuaGC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaUserDataObject.ReceiveLuaGC");
		
		ULuaUserDataObject_ReceiveLuaGC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaUserDataObject.LuaSetField
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLuaValue                                   Value                                                      (Parm, NativeAccessSpecifierPublic)
	 */
	void ULuaUserDataObject::LuaSetField(const class FString& Name, const struct FLuaValue& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaUserDataObject.LuaSetField");
		
		ULuaUserDataObject_LuaSetField_Params params {};
		params.Name = Name;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaUserDataObject.LuaGetField
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLuaValue ULuaUserDataObject::LuaGetField(const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaUserDataObject.LuaGetField");
		
		ULuaUserDataObject_LuaGetField_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaUserDataObject.LuaCallFunction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FLuaValue>                           Args                                                       (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bGlobal                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLuaValue ULuaUserDataObject::LuaCallFunction(const class FString& Name, TArray<struct FLuaValue> Args, bool bGlobal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaUserDataObject.LuaCallFunction");
		
		ULuaUserDataObject_LuaCallFunction_Params params {};
		params.Name = Name;
		params.Args = Args;
		params.bGlobal = bGlobal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaUserDataObject.GetObjectUFunctions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bOnlyPublic                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class FString> ULuaUserDataObject::GetObjectUFunctions(bool bOnlyPublic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaUserDataObject.GetObjectUFunctions");
		
		ULuaUserDataObject_GetObjectUFunctions_Params params {};
		params.bOnlyPublic = bOnlyPublic;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaUserDataObject.GetLuaStateInstance
	 * 		Flags  -> ()
	 */
	class ULuaState* ULuaUserDataObject::GetLuaStateInstance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaUserDataObject.GetLuaStateInstance");
		
		ULuaUserDataObject_GetLuaStateInstance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LuaMachine.LuaUserDataObject.GetLuaState
	 * 		Flags  -> ()
	 */
	class UClass* ULuaUserDataObject::GetLuaState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LuaMachine.LuaUserDataObject.GetLuaState");
		
		ULuaUserDataObject_GetLuaState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULuaUserDataObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULuaUserDataObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LuaMachine.LuaUserDataObject");
		return ptr;
	}

}


