/**
 * Name: Borderlands_3
 * Version: 4.20.3
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00998160
	 * 		Name   -> Function VaRestPlugin.VaRestJsonObject.SetStringField
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      StringValue                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVaRestJsonObject::SetStringField(const class FString& FieldName, const class FString& StringValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.SetStringField");
		
		UVaRestJsonObject_SetStringField_Params params {};
		params.FieldName = FieldName;
		params.StringValue = StringValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00998040
	 * 		Name   -> Function VaRestPlugin.VaRestJsonObject.SetStringArrayField
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              StringArray                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UVaRestJsonObject::SetStringArrayField(const class FString& FieldName, TArray<class FString> StringArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.SetStringArrayField");
		
		UVaRestJsonObject_SetStringArrayField_Params params {};
		params.FieldName = FieldName;
		params.StringArray = StringArray;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00997E60
	 * 		Name   -> Function VaRestPlugin.VaRestJsonObject.SetObjectField
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UVaRestJsonObject*                           JsonObject                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVaRestJsonObject::SetObjectField(const class FString& FieldName, class UVaRestJsonObject* JsonObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.SetObjectField");
		
		UVaRestJsonObject_SetObjectField_Params params {};
		params.FieldName = FieldName;
		params.JsonObject = JsonObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00997D60
	 * 		Name   -> Function VaRestPlugin.VaRestJsonObject.SetObjectArrayField
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UVaRestJsonObject*>                   ObjectArray                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UVaRestJsonObject::SetObjectArrayField(const class FString& FieldName, TArray<class UVaRestJsonObject*> ObjectArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.SetObjectArrayField");
		
		UVaRestJsonObject_SetObjectArrayField_Params params {};
		params.FieldName = FieldName;
		params.ObjectArray = ObjectArray;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00997C80
	 * 		Name   -> Function VaRestPlugin.VaRestJsonObject.SetNumberField
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Number                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVaRestJsonObject::SetNumberField(const class FString& FieldName, float Number)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.SetNumberField");
		
		UVaRestJsonObject_SetNumberField_Params params {};
		params.FieldName = FieldName;
		params.Number = Number;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00997B80
	 * 		Name   -> Function VaRestPlugin.VaRestJsonObject.SetNumberArrayField
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      NumberArray                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UVaRestJsonObject::SetNumberArrayField(const class FString& FieldName, TArray<float> NumberArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.SetNumberArrayField");
		
		UVaRestJsonObject_SetNumberArrayField_Params params {};
		params.FieldName = FieldName;
		params.NumberArray = NumberArray;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009979B0
	 * 		Name   -> Function VaRestPlugin.VaRestJsonObject.SetField
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UVaRestJsonValue*                            JsonValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVaRestJsonObject::SetField(const class FString& FieldName, class UVaRestJsonValue* JsonValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.SetField");
		
		UVaRestJsonObject_SetField_Params params {};
		params.FieldName = FieldName;
		params.JsonValue = JsonValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00997770
	 * 		Name   -> Function VaRestPlugin.VaRestJsonObject.SetBoolField
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVaRestJsonObject::SetBoolField(const class FString& FieldName, bool InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.SetBoolField");
		
		UVaRestJsonObject_SetBoolField_Params params {};
		params.FieldName = FieldName;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00997670
	 * 		Name   -> Function VaRestPlugin.VaRestJsonObject.SetBoolArrayField
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<bool>                                       BoolArray                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UVaRestJsonObject::SetBoolArrayField(const class FString& FieldName, TArray<bool> BoolArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.SetBoolArrayField");
		
		UVaRestJsonObject_SetBoolArrayField_Params params {};
		params.FieldName = FieldName;
		params.BoolArray = BoolArray;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00997420
	 * 		Name   -> Function VaRestPlugin.VaRestJsonObject.SetArrayField
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UVaRestJsonValue*>                    inArray                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UVaRestJsonObject::SetArrayField(const class FString& FieldName, TArray<class UVaRestJsonValue*> inArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.SetArrayField");
		
		UVaRestJsonObject_SetArrayField_Params params {};
		params.FieldName = FieldName;
		params.inArray = inArray;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009973A0
	 * 		Name   -> Function VaRestPlugin.VaRestJsonObject.Reset
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UVaRestJsonObject::Reset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.Reset");
		
		UVaRestJsonObject_Reset_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00997270
	 * 		Name   -> Function VaRestPlugin.VaRestJsonObject.RemoveField
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVaRestJsonObject::RemoveField(const class FString& FieldName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.RemoveField");
		
		UVaRestJsonObject_RemoveField_Params params {};
		params.FieldName = FieldName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009970C0
	 * 		Name   -> Function VaRestPlugin.VaRestJsonObject.MergeJsonObject
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UVaRestJsonObject*                           InJsonObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Overwrite                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVaRestJsonObject::MergeJsonObject(class UVaRestJsonObject* InJsonObject, bool Overwrite)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.MergeJsonObject");
		
		UVaRestJsonObject_MergeJsonObject_Params params {};
		params.InJsonObject = InJsonObject;
		params.Overwrite = Overwrite;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00996F50
	 * 		Name   -> Function VaRestPlugin.VaRestJsonObject.HasField
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FString                                      FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVaRestJsonObject::HasField(const class FString& FieldName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.HasField");
		
		UVaRestJsonObject_HasField_Params params {};
		params.FieldName = FieldName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00996D30
	 * 		Name   -> Function VaRestPlugin.VaRestJsonObject.GetStringField
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FString                                      FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UVaRestJsonObject::GetStringField(const class FString& FieldName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.GetStringField");
		
		UVaRestJsonObject_GetStringField_Params params {};
		params.FieldName = FieldName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00996C40
	 * 		Name   -> Function VaRestPlugin.VaRestJsonObject.GetStringArrayField
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FString                                      FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class FString> UVaRestJsonObject::GetStringArrayField(const class FString& FieldName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.GetStringArrayField");
		
		UVaRestJsonObject_GetStringArrayField_Params params {};
		params.FieldName = FieldName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009969A0
	 * 		Name   -> Function VaRestPlugin.VaRestJsonObject.GetObjectField
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FString                                      FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UVaRestJsonObject* UVaRestJsonObject::GetObjectField(const class FString& FieldName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.GetObjectField");
		
		UVaRestJsonObject_GetObjectField_Params params {};
		params.FieldName = FieldName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009968B0
	 * 		Name   -> Function VaRestPlugin.VaRestJsonObject.GetObjectArrayField
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FString                                      FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class UVaRestJsonObject*> UVaRestJsonObject::GetObjectArrayField(const class FString& FieldName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.GetObjectArrayField");
		
		UVaRestJsonObject_GetObjectArrayField_Params params {};
		params.FieldName = FieldName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00996800
	 * 		Name   -> Function VaRestPlugin.VaRestJsonObject.GetNumberField
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FString                                      FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UVaRestJsonObject::GetNumberField(const class FString& FieldName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.GetNumberField");
		
		UVaRestJsonObject_GetNumberField_Params params {};
		params.FieldName = FieldName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00996710
	 * 		Name   -> Function VaRestPlugin.VaRestJsonObject.GetNumberArrayField
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FString                                      FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<float> UVaRestJsonObject::GetNumberArrayField(const class FString& FieldName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.GetNumberArrayField");
		
		UVaRestJsonObject_GetNumberArrayField_Params params {};
		params.FieldName = FieldName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00996690
	 * 		Name   -> Function VaRestPlugin.VaRestJsonObject.GetFieldNames
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	TArray<class FString> UVaRestJsonObject::GetFieldNames()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.GetFieldNames");
		
		UVaRestJsonObject_GetFieldNames_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009965E0
	 * 		Name   -> Function VaRestPlugin.VaRestJsonObject.GetField
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FString                                      FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UVaRestJsonValue* UVaRestJsonObject::GetField(const class FString& FieldName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.GetField");
		
		UVaRestJsonObject_GetField_Params params {};
		params.FieldName = FieldName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00996530
	 * 		Name   -> Function VaRestPlugin.VaRestJsonObject.GetBoolField
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FString                                      FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVaRestJsonObject::GetBoolField(const class FString& FieldName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.GetBoolField");
		
		UVaRestJsonObject_GetBoolField_Params params {};
		params.FieldName = FieldName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00996440
	 * 		Name   -> Function VaRestPlugin.VaRestJsonObject.GetBoolArrayField
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FString                                      FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<bool> UVaRestJsonObject::GetBoolArrayField(const class FString& FieldName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.GetBoolArrayField");
		
		UVaRestJsonObject_GetBoolArrayField_Params params {};
		params.FieldName = FieldName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00996350
	 * 		Name   -> Function VaRestPlugin.VaRestJsonObject.GetArrayField
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FString                                      FieldName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class UVaRestJsonValue*> UVaRestJsonObject::GetArrayField(const class FString& FieldName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.GetArrayField");
		
		UVaRestJsonObject_GetArrayField_Params params {};
		params.FieldName = FieldName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00996250
	 * 		Name   -> Function VaRestPlugin.VaRestJsonObject.EncodeJsonToSingleString
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString UVaRestJsonObject::EncodeJsonToSingleString()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.EncodeJsonToSingleString");
		
		UVaRestJsonObject_EncodeJsonToSingleString_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009961D0
	 * 		Name   -> Function VaRestPlugin.VaRestJsonObject.EncodeJson
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString UVaRestJsonObject::EncodeJson()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.EncodeJson");
		
		UVaRestJsonObject_EncodeJson_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00996120
	 * 		Name   -> Function VaRestPlugin.VaRestJsonObject.DecodeJson
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      JsonString                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVaRestJsonObject::DecodeJson(const class FString& JsonString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.DecodeJson");
		
		UVaRestJsonObject_DecodeJson_Params params {};
		params.JsonString = JsonString;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00995B10
	 * 		Name   -> Function VaRestPlugin.VaRestJsonObject.ConstructJsonObject
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UVaRestJsonObject* UVaRestJsonObject::STATIC_ConstructJsonObject(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonObject.ConstructJsonObject");
		
		UVaRestJsonObject_ConstructJsonObject_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVaRestJsonObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVaRestJsonObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VaRestPlugin.VaRestJsonObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00997090
	 * 		Name   -> Function VaRestPlugin.VaRestJsonValue.IsNull
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UVaRestJsonValue::IsNull()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonValue.IsNull");
		
		UVaRestJsonValue_IsNull_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00996E50
	 * 		Name   -> Function VaRestPlugin.VaRestJsonValue.GetTypeString
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString UVaRestJsonValue::GetTypeString()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonValue.GetTypeString");
		
		UVaRestJsonValue_GetTypeString_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00996E20
	 * 		Name   -> Function VaRestPlugin.VaRestJsonValue.GetType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EVaJson UVaRestJsonValue::GetType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonValue.GetType");
		
		UVaRestJsonValue_GetType_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00995ED0
	 * 		Name   -> Function VaRestPlugin.VaRestJsonValue.ConstructJsonValueString
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      StringValue                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UVaRestJsonValue* UVaRestJsonValue::STATIC_ConstructJsonValueString(class UObject* WorldContextObject, const class FString& StringValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonValue.ConstructJsonValueString");
		
		UVaRestJsonValue_ConstructJsonValueString_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.StringValue = StringValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00995E10
	 * 		Name   -> Function VaRestPlugin.VaRestJsonValue.ConstructJsonValueObject
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UVaRestJsonObject*                           JsonObject                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UVaRestJsonValue* UVaRestJsonValue::STATIC_ConstructJsonValueObject(class UObject* WorldContextObject, class UVaRestJsonObject* JsonObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonValue.ConstructJsonValueObject");
		
		UVaRestJsonValue_ConstructJsonValueObject_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.JsonObject = JsonObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00995D40
	 * 		Name   -> Function VaRestPlugin.VaRestJsonValue.ConstructJsonValueNumber
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Number                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UVaRestJsonValue* UVaRestJsonValue::STATIC_ConstructJsonValueNumber(class UObject* WorldContextObject, float Number)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonValue.ConstructJsonValueNumber");
		
		UVaRestJsonValue_ConstructJsonValueNumber_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Number = Number;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00995C80
	 * 		Name   -> Function VaRestPlugin.VaRestJsonValue.ConstructJsonValueBool
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UVaRestJsonValue* UVaRestJsonValue::STATIC_ConstructJsonValueBool(class UObject* WorldContextObject, bool InValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonValue.ConstructJsonValueBool");
		
		UVaRestJsonValue_ConstructJsonValueBool_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00995B90
	 * 		Name   -> Function VaRestPlugin.VaRestJsonValue.ConstructJsonValueArray
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UVaRestJsonValue*>                    inArray                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class UVaRestJsonValue* UVaRestJsonValue::STATIC_ConstructJsonValueArray(class UObject* WorldContextObject, TArray<class UVaRestJsonValue*> inArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonValue.ConstructJsonValueArray");
		
		UVaRestJsonValue_ConstructJsonValueArray_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.inArray = inArray;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00995470
	 * 		Name   -> Function VaRestPlugin.VaRestJsonValue.AsString
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString UVaRestJsonValue::AsString()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonValue.AsString");
		
		UVaRestJsonValue_AsString_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00995440
	 * 		Name   -> Function VaRestPlugin.VaRestJsonValue.AsObject
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UVaRestJsonObject* UVaRestJsonValue::AsObject()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonValue.AsObject");
		
		UVaRestJsonValue_AsObject_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00995410
	 * 		Name   -> Function VaRestPlugin.VaRestJsonValue.AsNumber
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UVaRestJsonValue::AsNumber()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonValue.AsNumber");
		
		UVaRestJsonValue_AsNumber_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009953E0
	 * 		Name   -> Function VaRestPlugin.VaRestJsonValue.AsBool
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UVaRestJsonValue::AsBool()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonValue.AsBool");
		
		UVaRestJsonValue_AsBool_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00995360
	 * 		Name   -> Function VaRestPlugin.VaRestJsonValue.AsArray
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<class UVaRestJsonValue*> UVaRestJsonValue::AsArray()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestJsonValue.AsArray");
		
		UVaRestJsonValue_AsArray_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVaRestJsonValue.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVaRestJsonValue::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VaRestPlugin.VaRestJsonValue");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00997190
	 * 		Name   -> Function VaRestPlugin.VaRestLibrary.PercentEncode
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Source                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UVaRestLibrary::STATIC_PercentEncode(const class FString& Source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestLibrary.PercentEncode");
		
		UVaRestLibrary_PercentEncode_Params params {};
		params.Source = Source;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009958F0
	 * 		Name   -> Function VaRestPlugin.VaRestLibrary.CallURL
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ERequestVerb                                       Verb                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ERequestContentType                                ContentType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UVaRestJsonObject*                           VaRestJson                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UVaRestLibrary::STATIC_CallURL(class UObject* WorldContextObject, const class FString& URL, ERequestVerb Verb, ERequestContentType ContentType, class UVaRestJsonObject* VaRestJson, const class FScriptDelegate& Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestLibrary.CallURL");
		
		UVaRestLibrary_CallURL_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.URL = URL;
		params.Verb = Verb;
		params.ContentType = ContentType;
		params.VaRestJson = VaRestJson;
		params.Callback = Callback;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009957D0
	 * 		Name   -> Function VaRestPlugin.VaRestLibrary.Base64EncodeData
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<unsigned char>                              Data                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      Dest                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVaRestLibrary::STATIC_Base64EncodeData(TArray<unsigned char> Data, class FString* Dest)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestLibrary.Base64EncodeData");
		
		UVaRestLibrary_Base64EncodeData_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Dest != nullptr)
			*Dest = params.Dest;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009956F0
	 * 		Name   -> Function VaRestPlugin.VaRestLibrary.Base64Encode
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Source                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UVaRestLibrary::STATIC_Base64Encode(const class FString& Source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestLibrary.Base64Encode");
		
		UVaRestLibrary_Base64Encode_Params params {};
		params.Source = Source;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009955F0
	 * 		Name   -> Function VaRestPlugin.VaRestLibrary.Base64DecodeData
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Source                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<unsigned char>                              Dest                                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool UVaRestLibrary::STATIC_Base64DecodeData(const class FString& Source, TArray<unsigned char>* Dest)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestLibrary.Base64DecodeData");
		
		UVaRestLibrary_Base64DecodeData_Params params {};
		params.Source = Source;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Dest != nullptr)
			*Dest = params.Dest;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009954F0
	 * 		Name   -> Function VaRestPlugin.VaRestLibrary.Base64Decode
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Source                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Dest                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVaRestLibrary::STATIC_Base64Decode(const class FString& Source, class FString* Dest)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestLibrary.Base64Decode");
		
		UVaRestLibrary_Base64Decode_Params params {};
		params.Source = Source;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Dest != nullptr)
			*Dest = params.Dest;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVaRestLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVaRestLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VaRestPlugin.VaRestLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009982F0
	 * 		Name   -> Function VaRestPlugin.VaRestRequestJSON.SetVerb
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		ERequestVerb                                       Verb                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVaRestRequestJSON::SetVerb(ERequestVerb Verb)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestRequestJSON.SetVerb");
		
		UVaRestRequestJSON_SetVerb_Params params {};
		params.Verb = Verb;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00998250
	 * 		Name   -> Function VaRestPlugin.VaRestRequestJSON.SetStringRequestContent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Content                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVaRestRequestJSON::SetStringRequestContent(const class FString& Content)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestRequestJSON.SetStringRequestContent");
		
		UVaRestRequestJSON_SetStringRequestContent_Params params {};
		params.Content = Content;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00997FC0
	 * 		Name   -> Function VaRestPlugin.VaRestRequestJSON.SetResponseObject
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UVaRestJsonObject*                           JsonObject                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVaRestRequestJSON::SetResponseObject(class UVaRestJsonObject* JsonObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestRequestJSON.SetResponseObject");
		
		UVaRestRequestJSON_SetResponseObject_Params params {};
		params.JsonObject = JsonObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00997F40
	 * 		Name   -> Function VaRestPlugin.VaRestRequestJSON.SetRequestObject
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UVaRestJsonObject*                           JsonObject                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVaRestRequestJSON::SetRequestObject(class UVaRestJsonObject* JsonObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestRequestJSON.SetRequestObject");
		
		UVaRestRequestJSON_SetRequestObject_Params params {};
		params.JsonObject = JsonObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00997A90
	 * 		Name   -> Function VaRestPlugin.VaRestRequestJSON.SetHeader
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      HeaderName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      HeaderValue                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVaRestRequestJSON::SetHeader(const class FString& HeaderName, const class FString& HeaderValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestRequestJSON.SetHeader");
		
		UVaRestRequestJSON_SetHeader_Params params {};
		params.HeaderName = HeaderName;
		params.HeaderValue = HeaderValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009978D0
	 * 		Name   -> Function VaRestPlugin.VaRestRequestJSON.SetCustomVerb
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Verb                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVaRestRequestJSON::SetCustomVerb(const class FString& Verb)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestRequestJSON.SetCustomVerb");
		
		UVaRestRequestJSON_SetCustomVerb_Params params {};
		params.Verb = Verb;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00997850
	 * 		Name   -> Function VaRestPlugin.VaRestRequestJSON.SetContentType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		ERequestContentType                                ContentType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVaRestRequestJSON::SetContentType(ERequestContentType ContentType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestRequestJSON.SetContentType");
		
		UVaRestRequestJSON_SetContentType_Params params {};
		params.ContentType = ContentType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009975C0
	 * 		Name   -> Function VaRestPlugin.VaRestRequestJSON.SetBinaryRequestContent
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<unsigned char>                              Content                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UVaRestRequestJSON::SetBinaryRequestContent(TArray<unsigned char> Content)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestRequestJSON.SetBinaryRequestContent");
		
		UVaRestRequestJSON_SetBinaryRequestContent_Params params {};
		params.Content = Content;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00997520
	 * 		Name   -> Function VaRestPlugin.VaRestRequestJSON.SetBinaryContentType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      ContentType                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVaRestRequestJSON::SetBinaryContentType(const class FString& ContentType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestRequestJSON.SetBinaryContentType");
		
		UVaRestRequestJSON_SetBinaryContentType_Params params {};
		params.ContentType = ContentType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00997400
	 * 		Name   -> Function VaRestPlugin.VaRestRequestJSON.ResetResponseData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UVaRestRequestJSON::ResetResponseData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestRequestJSON.ResetResponseData");
		
		UVaRestRequestJSON_ResetResponseData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009973E0
	 * 		Name   -> Function VaRestPlugin.VaRestRequestJSON.ResetRequestData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UVaRestRequestJSON::ResetRequestData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestRequestJSON.ResetRequestData");
		
		UVaRestRequestJSON_ResetRequestData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009973C0
	 * 		Name   -> Function VaRestPlugin.VaRestRequestJSON.ResetData
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UVaRestRequestJSON::ResetData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestRequestJSON.ResetData");
		
		UVaRestRequestJSON_ResetData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00997310
	 * 		Name   -> Function VaRestPlugin.VaRestRequestJSON.RemoveTag
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        Tag                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UVaRestRequestJSON::RemoveTag(const class FName& Tag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestRequestJSON.RemoveTag");
		
		UVaRestRequestJSON_RemoveTag_Params params {};
		params.Tag = Tag;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x006710B0
	 * 		Name   -> Function VaRestPlugin.VaRestRequestJSON.ProcessURL
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVaRestRequestJSON::ProcessURL(const class FString& URL)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestRequestJSON.ProcessURL");
		
		UVaRestRequestJSON_ProcessURL_Params params {};
		params.URL = URL;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00997000
	 * 		Name   -> Function VaRestPlugin.VaRestRequestJSON.HasTag
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        Tag                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UVaRestRequestJSON::HasTag(const class FName& Tag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestRequestJSON.HasTag");
		
		UVaRestRequestJSON_HasTag_Params params {};
		params.Tag = Tag;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00996ED0
	 * 		Name   -> Function VaRestPlugin.VaRestRequestJSON.GetUrl
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class FString UVaRestRequestJSON::GetUrl()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestRequestJSON.GetUrl");
		
		UVaRestRequestJSON_GetUrl_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00996C10
	 * 		Name   -> Function VaRestPlugin.VaRestRequestJSON.GetStatus
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	ERequestStatus UVaRestRequestJSON::GetStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestRequestJSON.GetStatus");
		
		UVaRestRequestJSON_GetStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00996BE0
	 * 		Name   -> Function VaRestPlugin.VaRestRequestJSON.GetResponseObject
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UVaRestJsonObject* UVaRestRequestJSON::GetResponseObject()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestRequestJSON.GetResponseObject");
		
		UVaRestRequestJSON_GetResponseObject_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00996AB0
	 * 		Name   -> Function VaRestPlugin.VaRestRequestJSON.GetResponseHeader
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      HeaderName                                                 (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UVaRestRequestJSON::GetResponseHeader(const class FString& HeaderName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestRequestJSON.GetResponseHeader");
		
		UVaRestRequestJSON_GetResponseHeader_Params params {};
		params.HeaderName = HeaderName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00996A80
	 * 		Name   -> Function VaRestPlugin.VaRestRequestJSON.GetResponseCode
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	int32_t UVaRestRequestJSON::GetResponseCode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestRequestJSON.GetResponseCode");
		
		UVaRestRequestJSON_GetResponseCode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00996A50
	 * 		Name   -> Function VaRestPlugin.VaRestRequestJSON.GetRequestObject
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UVaRestJsonObject* UVaRestRequestJSON::GetRequestObject()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestRequestJSON.GetRequestObject");
		
		UVaRestRequestJSON_GetRequestObject_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009962D0
	 * 		Name   -> Function VaRestPlugin.VaRestRequestJSON.GetAllResponseHeaders
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	TArray<class FString> UVaRestRequestJSON::GetAllResponseHeaders()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestRequestJSON.GetAllResponseHeaders");
		
		UVaRestRequestJSON_GetAllResponseHeaders_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00996030
	 * 		Name   -> Function VaRestPlugin.VaRestRequestJSON.ConstructRequestExt
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ERequestVerb                                       Verb                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ERequestContentType                                ContentType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UVaRestRequestJSON* UVaRestRequestJSON::STATIC_ConstructRequestExt(class UObject* WorldContextObject, ERequestVerb Verb, ERequestContentType ContentType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestRequestJSON.ConstructRequestExt");
		
		UVaRestRequestJSON_ConstructRequestExt_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Verb = Verb;
		params.ContentType = ContentType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00995FB0
	 * 		Name   -> Function VaRestPlugin.VaRestRequestJSON.ConstructRequest
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UVaRestRequestJSON* UVaRestRequestJSON::STATIC_ConstructRequest(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestRequestJSON.ConstructRequest");
		
		UVaRestRequestJSON_ConstructRequest_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00995AF0
	 * 		Name   -> Function VaRestPlugin.VaRestRequestJSON.Cancel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UVaRestRequestJSON::Cancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestRequestJSON.Cancel");
		
		UVaRestRequestJSON_Cancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x009951D0
	 * 		Name   -> Function VaRestPlugin.VaRestRequestJSON.ApplyURL
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UVaRestJsonObject*                           Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UVaRestRequestJSON::ApplyURL(const class FString& URL, class UVaRestJsonObject** Result, class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestRequestJSON.ApplyURL");
		
		UVaRestRequestJSON_ApplyURL_Params params {};
		params.URL = URL;
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00995150
	 * 		Name   -> Function VaRestPlugin.VaRestRequestJSON.AddTag
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        Tag                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVaRestRequestJSON::AddTag(const class FName& Tag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function VaRestPlugin.VaRestRequestJSON.AddTag");
		
		UVaRestRequestJSON_AddTag_Params params {};
		params.Tag = Tag;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVaRestRequestJSON.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVaRestRequestJSON::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class VaRestPlugin.VaRestRequestJSON");
		return ptr;
	}

}


