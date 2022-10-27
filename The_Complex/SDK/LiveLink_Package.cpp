/**
 * Name: The_Complex
 * Version: 9349459
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
	 * 		Name   -> PredefinedFunction ULiveLinkBasicFrameInterpolationProcessor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULiveLinkBasicFrameInterpolationProcessor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LiveLink.LiveLinkBasicFrameInterpolationProcessor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULiveLinkAnimationFrameInterpolationProcessor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULiveLinkAnimationFrameInterpolationProcessor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LiveLink.LiveLinkAnimationFrameInterpolationProcessor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULiveLinkAnimationRoleToTransform.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULiveLinkAnimationRoleToTransform::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LiveLink.LiveLinkAnimationRoleToTransform");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULiveLinkAnimationVirtualSubject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULiveLinkAnimationVirtualSubject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LiveLink.LiveLinkAnimationVirtualSubject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULiveLinkTransformAxisSwitchPreProcessor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULiveLinkTransformAxisSwitchPreProcessor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LiveLink.LiveLinkTransformAxisSwitchPreProcessor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULiveLinkAnimationAxisSwitchPreProcessor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULiveLinkAnimationAxisSwitchPreProcessor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LiveLink.LiveLinkAnimationAxisSwitchPreProcessor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0105D470
	 * 		Name   -> Function LiveLink.LiveLinkBlueprintLibrary.TransformNames
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FSubjectFrameHandle                         SubjectFrameHandle                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<class FName>                                TransformNames                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void ULiveLinkBlueprintLibrary::STATIC_TransformNames(struct FSubjectFrameHandle* SubjectFrameHandle, TArray<class FName>* TransformNames)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.TransformNames");
		
		ULiveLinkBlueprintLibrary_TransformNames_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SubjectFrameHandle != nullptr)
			*SubjectFrameHandle = params.SubjectFrameHandle;
		if (TransformNames != nullptr)
			*TransformNames = params.TransformNames;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0105D350
	 * 		Name   -> Function LiveLink.LiveLinkBlueprintLibrary.TransformName
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FLiveLinkTransform                          LiveLinkTransform                                          (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FName                                        Name                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULiveLinkBlueprintLibrary::STATIC_TransformName(struct FLiveLinkTransform* LiveLinkTransform, class FName* Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.TransformName");
		
		ULiveLinkBlueprintLibrary_TransformName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LiveLinkTransform != nullptr)
			*LiveLinkTransform = params.LiveLinkTransform;
		if (Name != nullptr)
			*Name = params.Name;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0105D270
	 * 		Name   -> Function LiveLink.LiveLinkBlueprintLibrary.SetLiveLinkSubjectEnabled
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FLiveLinkSubjectKey                         SubjectKey                                                 (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULiveLinkBlueprintLibrary::STATIC_SetLiveLinkSubjectEnabled(const struct FLiveLinkSubjectKey& SubjectKey, bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.SetLiveLinkSubjectEnabled");
		
		ULiveLinkBlueprintLibrary_SetLiveLinkSubjectEnabled_Params params {};
		params.SubjectKey = SubjectKey;
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0105D190
	 * 		Name   -> Function LiveLink.LiveLinkBlueprintLibrary.RemoveSource
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLiveLinkSourceHandle                       SourceHandle                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool ULiveLinkBlueprintLibrary::STATIC_RemoveSource(struct FLiveLinkSourceHandle* SourceHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.RemoveSource");
		
		ULiveLinkBlueprintLibrary_RemoveSource_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SourceHandle != nullptr)
			*SourceHandle = params.SourceHandle;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0105CFF0
	 * 		Name   -> Function LiveLink.LiveLinkBlueprintLibrary.ParentBoneSpaceTransform
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FLiveLinkTransform                          LiveLinkTransform                                          (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Transform                                                  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULiveLinkBlueprintLibrary::STATIC_ParentBoneSpaceTransform(struct FLiveLinkTransform* LiveLinkTransform, struct FTransform* Transform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.ParentBoneSpaceTransform");
		
		ULiveLinkBlueprintLibrary_ParentBoneSpaceTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LiveLinkTransform != nullptr)
			*LiveLinkTransform = params.LiveLinkTransform;
		if (Transform != nullptr)
			*Transform = params.Transform;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0105CF10
	 * 		Name   -> Function LiveLink.LiveLinkBlueprintLibrary.NumberOfTransforms
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FSubjectFrameHandle                         SubjectFrameHandle                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	int32_t ULiveLinkBlueprintLibrary::STATIC_NumberOfTransforms(struct FSubjectFrameHandle* SubjectFrameHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.NumberOfTransforms");
		
		ULiveLinkBlueprintLibrary_NumberOfTransforms_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SubjectFrameHandle != nullptr)
			*SubjectFrameHandle = params.SubjectFrameHandle;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0105CE20
	 * 		Name   -> Function LiveLink.LiveLinkBlueprintLibrary.IsSpecificLiveLinkSubjectEnabled
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FLiveLinkSubjectKey                         SubjectKey                                                 (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bForThisFrame                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULiveLinkBlueprintLibrary::STATIC_IsSpecificLiveLinkSubjectEnabled(const struct FLiveLinkSubjectKey& SubjectKey, bool bForThisFrame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.IsSpecificLiveLinkSubjectEnabled");
		
		ULiveLinkBlueprintLibrary_IsSpecificLiveLinkSubjectEnabled_Params params {};
		params.SubjectKey = SubjectKey;
		params.bForThisFrame = bForThisFrame;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0105CD40
	 * 		Name   -> Function LiveLink.LiveLinkBlueprintLibrary.IsSourceStillValid
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLiveLinkSourceHandle                       SourceHandle                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool ULiveLinkBlueprintLibrary::STATIC_IsSourceStillValid(struct FLiveLinkSourceHandle* SourceHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.IsSourceStillValid");
		
		ULiveLinkBlueprintLibrary_IsSourceStillValid_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SourceHandle != nullptr)
			*SourceHandle = params.SourceHandle;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0105CCB0
	 * 		Name   -> Function LiveLink.LiveLinkBlueprintLibrary.IsLiveLinkSubjectEnabled
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FLiveLinkSubjectName                        SubjectName                                                (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULiveLinkBlueprintLibrary::STATIC_IsLiveLinkSubjectEnabled(const struct FLiveLinkSubjectName& SubjectName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.IsLiveLinkSubjectEnabled");
		
		ULiveLinkBlueprintLibrary_IsLiveLinkSubjectEnabled_Params params {};
		params.SubjectName = SubjectName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0105CBE0
	 * 		Name   -> Function LiveLink.LiveLinkBlueprintLibrary.HasParent
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FLiveLinkTransform                          LiveLinkTransform                                          (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool ULiveLinkBlueprintLibrary::STATIC_HasParent(struct FLiveLinkTransform* LiveLinkTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.HasParent");
		
		ULiveLinkBlueprintLibrary_HasParent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LiveLinkTransform != nullptr)
			*LiveLinkTransform = params.LiveLinkTransform;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0105CA30
	 * 		Name   -> Function LiveLink.LiveLinkBlueprintLibrary.GetTransformByName
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FSubjectFrameHandle                         SubjectFrameHandle                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FName                                        TransformName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLiveLinkTransform                          LiveLinkTransform                                          (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void ULiveLinkBlueprintLibrary::STATIC_GetTransformByName(struct FSubjectFrameHandle* SubjectFrameHandle, const class FName& TransformName, struct FLiveLinkTransform* LiveLinkTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.GetTransformByName");
		
		ULiveLinkBlueprintLibrary_GetTransformByName_Params params {};
		params.TransformName = TransformName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SubjectFrameHandle != nullptr)
			*SubjectFrameHandle = params.SubjectFrameHandle;
		if (LiveLinkTransform != nullptr)
			*LiveLinkTransform = params.LiveLinkTransform;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0105C880
	 * 		Name   -> Function LiveLink.LiveLinkBlueprintLibrary.GetTransformByIndex
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FSubjectFrameHandle                         SubjectFrameHandle                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TransformIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLiveLinkTransform                          LiveLinkTransform                                          (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void ULiveLinkBlueprintLibrary::STATIC_GetTransformByIndex(struct FSubjectFrameHandle* SubjectFrameHandle, int32_t TransformIndex, struct FLiveLinkTransform* LiveLinkTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.GetTransformByIndex");
		
		ULiveLinkBlueprintLibrary_GetTransformByIndex_Params params {};
		params.TransformIndex = TransformIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SubjectFrameHandle != nullptr)
			*SubjectFrameHandle = params.SubjectFrameHandle;
		if (LiveLinkTransform != nullptr)
			*LiveLinkTransform = params.LiveLinkTransform;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0105C290
	 * 		Name   -> Function LiveLink.LiveLinkBlueprintLibrary.GetSpecificLiveLinkSubjectRole
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FLiveLinkSubjectKey                         SubjectKey                                                 (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UClass* ULiveLinkBlueprintLibrary::STATIC_GetSpecificLiveLinkSubjectRole(const struct FLiveLinkSubjectKey& SubjectKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.GetSpecificLiveLinkSubjectRole");
		
		ULiveLinkBlueprintLibrary_GetSpecificLiveLinkSubjectRole_Params params {};
		params.SubjectKey = SubjectKey;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0105C150
	 * 		Name   -> Function LiveLink.LiveLinkBlueprintLibrary.GetSourceType
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLiveLinkSourceHandle                       SourceHandle                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FText ULiveLinkBlueprintLibrary::STATIC_GetSourceType(struct FLiveLinkSourceHandle* SourceHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.GetSourceType");
		
		ULiveLinkBlueprintLibrary_GetSourceType_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SourceHandle != nullptr)
			*SourceHandle = params.SourceHandle;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0105C010
	 * 		Name   -> Function LiveLink.LiveLinkBlueprintLibrary.GetSourceStatus
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLiveLinkSourceHandle                       SourceHandle                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FText ULiveLinkBlueprintLibrary::STATIC_GetSourceStatus(struct FLiveLinkSourceHandle* SourceHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.GetSourceStatus");
		
		ULiveLinkBlueprintLibrary_GetSourceStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SourceHandle != nullptr)
			*SourceHandle = params.SourceHandle;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0105BED0
	 * 		Name   -> Function LiveLink.LiveLinkBlueprintLibrary.GetSourceMachineName
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLiveLinkSourceHandle                       SourceHandle                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FText ULiveLinkBlueprintLibrary::STATIC_GetSourceMachineName(struct FLiveLinkSourceHandle* SourceHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.GetSourceMachineName");
		
		ULiveLinkBlueprintLibrary_GetSourceMachineName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SourceHandle != nullptr)
			*SourceHandle = params.SourceHandle;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0105BD60
	 * 		Name   -> Function LiveLink.LiveLinkBlueprintLibrary.GetRootTransform
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FSubjectFrameHandle                         SubjectFrameHandle                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLiveLinkTransform                          LiveLinkTransform                                          (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void ULiveLinkBlueprintLibrary::STATIC_GetRootTransform(struct FSubjectFrameHandle* SubjectFrameHandle, struct FLiveLinkTransform* LiveLinkTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.GetRootTransform");
		
		ULiveLinkBlueprintLibrary_GetRootTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SubjectFrameHandle != nullptr)
			*SubjectFrameHandle = params.SubjectFrameHandle;
		if (LiveLinkTransform != nullptr)
			*LiveLinkTransform = params.LiveLinkTransform;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0105BBB0
	 * 		Name   -> Function LiveLink.LiveLinkBlueprintLibrary.GetPropertyValue
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FLiveLinkBasicBlueprintData                 BasicData                                                  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FName                                        PropertyName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULiveLinkBlueprintLibrary::STATIC_GetPropertyValue(struct FLiveLinkBasicBlueprintData* BasicData, const class FName& PropertyName, float* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.GetPropertyValue");
		
		ULiveLinkBlueprintLibrary_GetPropertyValue_Params params {};
		params.PropertyName = PropertyName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BasicData != nullptr)
			*BasicData = params.BasicData;
		if (Value != nullptr)
			*Value = params.Value;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0105BA50
	 * 		Name   -> Function LiveLink.LiveLinkBlueprintLibrary.GetParent
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FLiveLinkTransform                          LiveLinkTransform                                          (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLiveLinkTransform                          Parent                                                     (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void ULiveLinkBlueprintLibrary::STATIC_GetParent(struct FLiveLinkTransform* LiveLinkTransform, struct FLiveLinkTransform* Parent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.GetParent");
		
		ULiveLinkBlueprintLibrary_GetParent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LiveLinkTransform != nullptr)
			*LiveLinkTransform = params.LiveLinkTransform;
		if (Parent != nullptr)
			*Parent = params.Parent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0105B8A0
	 * 		Name   -> Function LiveLink.LiveLinkBlueprintLibrary.GetMetadata
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FSubjectFrameHandle                         SubjectFrameHandle                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FSubjectMetadata                            MetaData                                                   (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void ULiveLinkBlueprintLibrary::STATIC_GetMetadata(struct FSubjectFrameHandle* SubjectFrameHandle, struct FSubjectMetadata* MetaData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.GetMetadata");
		
		ULiveLinkBlueprintLibrary_GetMetadata_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SubjectFrameHandle != nullptr)
			*SubjectFrameHandle = params.SubjectFrameHandle;
		if (MetaData != nullptr)
			*MetaData = params.MetaData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0105B790
	 * 		Name   -> Function LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkSubjects
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bIncludeDisabledSubject                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIncludeVirtualSubject                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FLiveLinkSubjectKey> ULiveLinkBlueprintLibrary::STATIC_GetLiveLinkSubjects(bool bIncludeDisabledSubject, bool bIncludeVirtualSubject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkSubjects");
		
		ULiveLinkBlueprintLibrary_GetLiveLinkSubjects_Params params {};
		params.bIncludeDisabledSubject = bIncludeDisabledSubject;
		params.bIncludeVirtualSubject = bIncludeVirtualSubject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0105B700
	 * 		Name   -> Function LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkSubjectRole
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FLiveLinkSubjectName                        SubjectName                                                (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UClass* ULiveLinkBlueprintLibrary::STATIC_GetLiveLinkSubjectRole(const struct FLiveLinkSubjectName& SubjectName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkSubjectRole");
		
		ULiveLinkBlueprintLibrary_GetLiveLinkSubjectRole_Params params {};
		params.SubjectName = SubjectName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0105B630
	 * 		Name   -> Function LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkEnabledSubjectNames
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bIncludeVirtualSubject                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FLiveLinkSubjectName> ULiveLinkBlueprintLibrary::STATIC_GetLiveLinkEnabledSubjectNames(bool bIncludeVirtualSubject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkEnabledSubjectNames");
		
		ULiveLinkBlueprintLibrary_GetLiveLinkEnabledSubjectNames_Params params {};
		params.bIncludeVirtualSubject = bIncludeVirtualSubject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0105B450
	 * 		Name   -> Function LiveLink.LiveLinkBlueprintLibrary.GetCurves
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FSubjectFrameHandle                         SubjectFrameHandle                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TMap<class FName, float>                           Curves                                                     (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void ULiveLinkBlueprintLibrary::STATIC_GetCurves(struct FSubjectFrameHandle* SubjectFrameHandle, TMap<class FName, float>* Curves)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.GetCurves");
		
		ULiveLinkBlueprintLibrary_GetCurves_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SubjectFrameHandle != nullptr)
			*SubjectFrameHandle = params.SubjectFrameHandle;
		if (Curves != nullptr)
			*Curves = params.Curves;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0105B2C0
	 * 		Name   -> Function LiveLink.LiveLinkBlueprintLibrary.GetChildren
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FLiveLinkTransform                          LiveLinkTransform                                          (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FLiveLinkTransform>                  Children                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void ULiveLinkBlueprintLibrary::STATIC_GetChildren(struct FLiveLinkTransform* LiveLinkTransform, TArray<struct FLiveLinkTransform>* Children)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.GetChildren");
		
		ULiveLinkBlueprintLibrary_GetChildren_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LiveLinkTransform != nullptr)
			*LiveLinkTransform = params.LiveLinkTransform;
		if (Children != nullptr)
			*Children = params.Children;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0105B110
	 * 		Name   -> Function LiveLink.LiveLinkBlueprintLibrary.GetBasicData
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FSubjectFrameHandle                         SubjectFrameHandle                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLiveLinkBasicBlueprintData                 BasicBlueprintData                                         (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void ULiveLinkBlueprintLibrary::STATIC_GetBasicData(struct FSubjectFrameHandle* SubjectFrameHandle, struct FLiveLinkBasicBlueprintData* BasicBlueprintData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.GetBasicData");
		
		ULiveLinkBlueprintLibrary_GetBasicData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SubjectFrameHandle != nullptr)
			*SubjectFrameHandle = params.SubjectFrameHandle;
		if (BasicBlueprintData != nullptr)
			*BasicBlueprintData = params.BasicBlueprintData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0105AD10
	 * 		Name   -> Function LiveLink.LiveLinkBlueprintLibrary.GetAnimationStaticData
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FSubjectFrameHandle                         SubjectFrameHandle                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLiveLinkSkeletonStaticData                 AnimationStaticData                                        (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	bool ULiveLinkBlueprintLibrary::STATIC_GetAnimationStaticData(struct FSubjectFrameHandle* SubjectFrameHandle, struct FLiveLinkSkeletonStaticData* AnimationStaticData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.GetAnimationStaticData");
		
		ULiveLinkBlueprintLibrary_GetAnimationStaticData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SubjectFrameHandle != nullptr)
			*SubjectFrameHandle = params.SubjectFrameHandle;
		if (AnimationStaticData != nullptr)
			*AnimationStaticData = params.AnimationStaticData;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0105AB60
	 * 		Name   -> Function LiveLink.LiveLinkBlueprintLibrary.GetAnimationFrameData
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FSubjectFrameHandle                         SubjectFrameHandle                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLiveLinkAnimationFrameData                 AnimationFrameData                                         (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	bool ULiveLinkBlueprintLibrary::STATIC_GetAnimationFrameData(struct FSubjectFrameHandle* SubjectFrameHandle, struct FLiveLinkAnimationFrameData* AnimationFrameData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.GetAnimationFrameData");
		
		ULiveLinkBlueprintLibrary_GetAnimationFrameData_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SubjectFrameHandle != nullptr)
			*SubjectFrameHandle = params.SubjectFrameHandle;
		if (AnimationFrameData != nullptr)
			*AnimationFrameData = params.AnimationFrameData;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01057270
	 * 		Name   -> Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameWithSpecificRole
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLiveLinkSubjectName                        SubjectName                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      Role                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLiveLinkBaseBlueprintData                  OutBlueprintData                                           (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	bool ULiveLinkBlueprintLibrary::STATIC_EvaluateLiveLinkFrameWithSpecificRole(const struct FLiveLinkSubjectName& SubjectName, class UClass* Role, struct FLiveLinkBaseBlueprintData* OutBlueprintData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameWithSpecificRole");
		
		ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameWithSpecificRole_Params params {};
		params.SubjectName = SubjectName;
		params.Role = Role;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutBlueprintData != nullptr)
			*OutBlueprintData = params.OutBlueprintData;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01057090
	 * 		Name   -> Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameAtWorldTimeOffset
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLiveLinkSubjectName                        SubjectName                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      Role                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              WorldTimeOffset                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLiveLinkBaseBlueprintData                  OutBlueprintData                                           (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	bool ULiveLinkBlueprintLibrary::STATIC_EvaluateLiveLinkFrameAtWorldTimeOffset(const struct FLiveLinkSubjectName& SubjectName, class UClass* Role, float WorldTimeOffset, struct FLiveLinkBaseBlueprintData* OutBlueprintData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameAtWorldTimeOffset");
		
		ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtWorldTimeOffset_Params params {};
		params.SubjectName = SubjectName;
		params.Role = Role;
		params.WorldTimeOffset = WorldTimeOffset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutBlueprintData != nullptr)
			*OutBlueprintData = params.OutBlueprintData;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01056EA0
	 * 		Name   -> Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameAtSceneTime
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLiveLinkSubjectName                        SubjectName                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      Role                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTimecode                                   SceneTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLiveLinkBaseBlueprintData                  OutBlueprintData                                           (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	bool ULiveLinkBlueprintLibrary::STATIC_EvaluateLiveLinkFrameAtSceneTime(const struct FLiveLinkSubjectName& SubjectName, class UClass* Role, const struct FTimecode& SceneTime, struct FLiveLinkBaseBlueprintData* OutBlueprintData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameAtSceneTime");
		
		ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtSceneTime_Params params {};
		params.SubjectName = SubjectName;
		params.Role = Role;
		params.SceneTime = SceneTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutBlueprintData != nullptr)
			*OutBlueprintData = params.OutBlueprintData;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01056D60
	 * 		Name   -> Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrame
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLiveLinkSubjectRepresentation              SubjectRepresentation                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FLiveLinkBaseBlueprintData                  OutBlueprintData                                           (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	bool ULiveLinkBlueprintLibrary::STATIC_EvaluateLiveLinkFrame(const struct FLiveLinkSubjectRepresentation& SubjectRepresentation, struct FLiveLinkBaseBlueprintData* OutBlueprintData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrame");
		
		ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrame_Params params {};
		params.SubjectRepresentation = SubjectRepresentation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutBlueprintData != nullptr)
			*OutBlueprintData = params.OutBlueprintData;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0105A820
	 * 		Name   -> Function LiveLink.LiveLinkBlueprintLibrary.ComponentSpaceTransform
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FLiveLinkTransform                          LiveLinkTransform                                          (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  Transform                                                  (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULiveLinkBlueprintLibrary::STATIC_ComponentSpaceTransform(struct FLiveLinkTransform* LiveLinkTransform, struct FTransform* Transform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.ComponentSpaceTransform");
		
		ULiveLinkBlueprintLibrary_ComponentSpaceTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LiveLinkTransform != nullptr)
			*LiveLinkTransform = params.LiveLinkTransform;
		if (Transform != nullptr)
			*Transform = params.Transform;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0105A750
	 * 		Name   -> Function LiveLink.LiveLinkBlueprintLibrary.ChildCount
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FLiveLinkTransform                          LiveLinkTransform                                          (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	int32_t ULiveLinkBlueprintLibrary::STATIC_ChildCount(struct FLiveLinkTransform* LiveLinkTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.ChildCount");
		
		ULiveLinkBlueprintLibrary_ChildCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LiveLinkTransform != nullptr)
			*LiveLinkTransform = params.LiveLinkTransform;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULiveLinkBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULiveLinkBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LiveLink.LiveLinkBlueprintLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01057530
	 * 		Name   -> Function LiveLink.LiveLinkBlueprintVirtualSubject.UpdateVirtualSubjectStaticData_Internal
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLiveLinkBaseStaticData                     InStruct                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool ULiveLinkBlueprintVirtualSubject::UpdateVirtualSubjectStaticData_Internal(const struct FLiveLinkBaseStaticData& InStruct)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintVirtualSubject.UpdateVirtualSubjectStaticData_Internal");
		
		ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectStaticData_Internal_Params params {};
		params.InStruct = InStruct;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01057400
	 * 		Name   -> Function LiveLink.LiveLinkBlueprintVirtualSubject.UpdateVirtualSubjectFrameData_Internal
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLiveLinkBaseFrameData                      InStruct                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bInShouldStampCurrentTime                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULiveLinkBlueprintVirtualSubject::UpdateVirtualSubjectFrameData_Internal(const struct FLiveLinkBaseFrameData& InStruct, bool bInShouldStampCurrentTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintVirtualSubject.UpdateVirtualSubjectFrameData_Internal");
		
		ULiveLinkBlueprintVirtualSubject_UpdateVirtualSubjectFrameData_Internal_Params params {};
		params.InStruct = InStruct;
		params.bInShouldStampCurrentTime = bInShouldStampCurrentTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01766520
	 * 		Name   -> Function LiveLink.LiveLinkBlueprintVirtualSubject.OnUpdate
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ULiveLinkBlueprintVirtualSubject::OnUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintVirtualSubject.OnUpdate");
		
		ULiveLinkBlueprintVirtualSubject_OnUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01766520
	 * 		Name   -> Function LiveLink.LiveLinkBlueprintVirtualSubject.OnInitialize
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ULiveLinkBlueprintVirtualSubject::OnInitialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintVirtualSubject.OnInitialize");
		
		ULiveLinkBlueprintVirtualSubject_OnInitialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULiveLinkBlueprintVirtualSubject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULiveLinkBlueprintVirtualSubject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LiveLink.LiveLinkBlueprintVirtualSubject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0105C6B0
	 * 		Name   -> Function LiveLink.LiveLinkComponent.GetSubjectDataAtWorldTime
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        SubjectName                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              WorldTime                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSuccess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSubjectFrameHandle                         SubjectFrameHandle                                         (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void ULiveLinkComponent::GetSubjectDataAtWorldTime(const class FName& SubjectName, float WorldTime, bool* bSuccess, struct FSubjectFrameHandle* SubjectFrameHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkComponent.GetSubjectDataAtWorldTime");
		
		ULiveLinkComponent_GetSubjectDataAtWorldTime_Params params {};
		params.SubjectName = SubjectName;
		params.WorldTime = WorldTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bSuccess != nullptr)
			*bSuccess = params.bSuccess;
		if (SubjectFrameHandle != nullptr)
			*SubjectFrameHandle = params.SubjectFrameHandle;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0105C4B0
	 * 		Name   -> Function LiveLink.LiveLinkComponent.GetSubjectDataAtSceneTime
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        SubjectName                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTimecode                                   SceneTime                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSuccess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSubjectFrameHandle                         SubjectFrameHandle                                         (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void ULiveLinkComponent::GetSubjectDataAtSceneTime(const class FName& SubjectName, const struct FTimecode& SceneTime, bool* bSuccess, struct FSubjectFrameHandle* SubjectFrameHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkComponent.GetSubjectDataAtSceneTime");
		
		ULiveLinkComponent_GetSubjectDataAtSceneTime_Params params {};
		params.SubjectName = SubjectName;
		params.SceneTime = SceneTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bSuccess != nullptr)
			*bSuccess = params.bSuccess;
		if (SubjectFrameHandle != nullptr)
			*SubjectFrameHandle = params.SubjectFrameHandle;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0105C340
	 * 		Name   -> Function LiveLink.LiveLinkComponent.GetSubjectData
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        SubjectName                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bSuccess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSubjectFrameHandle                         SubjectFrameHandle                                         (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void ULiveLinkComponent::GetSubjectData(const class FName& SubjectName, bool* bSuccess, struct FSubjectFrameHandle* SubjectFrameHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkComponent.GetSubjectData");
		
		ULiveLinkComponent_GetSubjectData_Params params {};
		params.SubjectName = SubjectName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bSuccess != nullptr)
			*bSuccess = params.bSuccess;
		if (SubjectFrameHandle != nullptr)
			*SubjectFrameHandle = params.SubjectFrameHandle;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0105B060
	 * 		Name   -> Function LiveLink.LiveLinkComponent.GetAvailableSubjectNames
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<class FName>                                SubjectNames                                               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void ULiveLinkComponent::GetAvailableSubjectNames(TArray<class FName>* SubjectNames)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkComponent.GetAvailableSubjectNames");
		
		ULiveLinkComponent_GetAvailableSubjectNames_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SubjectNames != nullptr)
			*SubjectNames = params.SubjectNames;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULiveLinkComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULiveLinkComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LiveLink.LiveLinkComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULiveLinkDrivenComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULiveLinkDrivenComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LiveLink.LiveLinkDrivenComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0105AE90
	 * 		Name   -> Function LiveLink.LiveLinkMessageBusFinder.GetAvailableProviders
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FProviderPollResult>                 AvailableProviders                                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void ULiveLinkMessageBusFinder::GetAvailableProviders(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, float Duration, TArray<struct FProviderPollResult>* AvailableProviders)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkMessageBusFinder.GetAvailableProviders");
		
		ULiveLinkMessageBusFinder_GetAvailableProviders_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AvailableProviders != nullptr)
			*AvailableProviders = params.AvailableProviders;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0105AB30
	 * 		Name   -> Function LiveLink.LiveLinkMessageBusFinder.ConstructMessageBusFinder
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	class ULiveLinkMessageBusFinder* ULiveLinkMessageBusFinder::STATIC_ConstructMessageBusFinder()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkMessageBusFinder.ConstructMessageBusFinder");
		
		ULiveLinkMessageBusFinder_ConstructMessageBusFinder_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0105A9C0
	 * 		Name   -> Function LiveLink.LiveLinkMessageBusFinder.ConnectToProvider
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FProviderPollResult                         Provider                                                   (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FLiveLinkSourceHandle                       SourceHandle                                               (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void ULiveLinkMessageBusFinder::STATIC_ConnectToProvider(struct FProviderPollResult* Provider, struct FLiveLinkSourceHandle* SourceHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkMessageBusFinder.ConnectToProvider");
		
		ULiveLinkMessageBusFinder_ConnectToProvider_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Provider != nullptr)
			*Provider = params.Provider;
		if (SourceHandle != nullptr)
			*SourceHandle = params.SourceHandle;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULiveLinkMessageBusFinder.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULiveLinkMessageBusFinder::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LiveLink.LiveLinkMessageBusFinder");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULiveLinkMessageBusSourceFactory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULiveLinkMessageBusSourceFactory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LiveLink.LiveLinkMessageBusSourceFactory");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULiveLinkMessageBusSourceSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULiveLinkMessageBusSourceSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LiveLink.LiveLinkMessageBusSourceSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0105A730
	 * 		Name   -> Function LiveLink.LiveLinkPreset.BuildFromClient
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void ULiveLinkPreset::BuildFromClient()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkPreset.BuildFromClient");
		
		ULiveLinkPreset_BuildFromClient_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0105A640
	 * 		Name   -> Function LiveLink.LiveLinkPreset.ApplyToClientLatent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULiveLinkPreset::ApplyToClientLatent(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkPreset.ApplyToClientLatent");
		
		ULiveLinkPreset_ApplyToClientLatent_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0105A610
	 * 		Name   -> Function LiveLink.LiveLinkPreset.ApplyToClient
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
	 */
	bool ULiveLinkPreset::ApplyToClient()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkPreset.ApplyToClient");
		
		ULiveLinkPreset_ApplyToClient_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0105A570
	 * 		Name   -> Function LiveLink.LiveLinkPreset.AddToClient
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
	 * Parameters:
	 * 		bool                                               bRecreatePresets                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ULiveLinkPreset::AddToClient(bool bRecreatePresets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkPreset.AddToClient");
		
		ULiveLinkPreset_AddToClient_Params params {};
		params.bRecreatePresets = bRecreatePresets;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULiveLinkPreset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULiveLinkPreset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LiveLink.LiveLinkPreset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULiveLinkSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULiveLinkSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LiveLink.LiveLinkSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULiveLinkTimecodeProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULiveLinkTimecodeProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LiveLink.LiveLinkTimecodeProvider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULiveLinkTimeSynchronizationSource.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULiveLinkTimeSynchronizationSource::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LiveLink.LiveLinkTimeSynchronizationSource");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULiveLinkVirtualSubjectSourceSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULiveLinkVirtualSubjectSourceSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LiveLink.LiveLinkVirtualSubjectSourceSettings");
		return ptr;
	}

}


