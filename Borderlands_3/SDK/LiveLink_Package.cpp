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
	 * 		RVA    -> 0x00851CB0
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
	 * 		RVA    -> 0x00851B90
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
	 * 		RVA    -> 0x00851AB0
	 * 		Name   -> Function LiveLink.LiveLinkBlueprintLibrary.RequestShutdown
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLiveLinkSourceHandle                       SourceHandle                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool ULiveLinkBlueprintLibrary::STATIC_RequestShutdown(struct FLiveLinkSourceHandle* SourceHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkBlueprintLibrary.RequestShutdown");
		
		ULiveLinkBlueprintLibrary_RequestShutdown_Params params {};
		
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
	 * 		RVA    -> 0x00851840
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
	 * 		RVA    -> 0x00851760
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
	 * 		RVA    -> 0x00851680
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
	 * 		RVA    -> 0x008515B0
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
	 * 		RVA    -> 0x00851410
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
	 * 		RVA    -> 0x00851270
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
	 * 		RVA    -> 0x00850FE0
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
	 * 		RVA    -> 0x00850EC0
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
	 * 		RVA    -> 0x00850DA0
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
	 * 		RVA    -> 0x00850C40
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
	 * 		RVA    -> 0x008509C0
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
	 * 		RVA    -> 0x00850800
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
	 * 		RVA    -> 0x00850650
	 * 		Name   -> Function LiveLink.LiveLinkBlueprintLibrary.GetCurves
	 * 		Flags  -> (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FSubjectFrameHandle                         SubjectFrameHandle                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TMap<class FName, float>                           Curves                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
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
	 * 		RVA    -> 0x008504C0
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
	 * 		RVA    -> 0x0084FF50
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
	 * 		RVA    -> 0x0084FE80
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
	 * 		RVA    -> 0x00851100
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
	 * 		RVA    -> 0x00850410
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULiveLinkInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULiveLinkInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LiveLink.LiveLinkInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00850250
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
	 * 		RVA    -> 0x00850220
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
	 * 		RVA    -> 0x008500C0
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
	 * 		Name   -> PredefinedFunction ULiveLinkRetargetAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULiveLinkRetargetAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LiveLink.LiveLinkRetargetAsset");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x008519B0
	 * 		Name   -> Function LiveLink.LiveLinkRemapAsset.RemapCurveElements
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintEvent, Const)
	 * Parameters:
	 * 		TMap<class FName, float>                           CurveItems                                                 (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ULiveLinkRemapAsset::RemapCurveElements(TMap<class FName, float>* CurveItems)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkRemapAsset.RemapCurveElements");
		
		ULiveLinkRemapAsset_RemapCurveElements_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CurveItems != nullptr)
			*CurveItems = params.CurveItems;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00850BB0
	 * 		Name   -> Function LiveLink.LiveLinkRemapAsset.GetRemappedCurveName
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent, Const)
	 * Parameters:
	 * 		class FName                                        CurveName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FName ULiveLinkRemapAsset::GetRemappedCurveName(const class FName& CurveName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkRemapAsset.GetRemappedCurveName");
		
		ULiveLinkRemapAsset_GetRemappedCurveName_Params params {};
		params.CurveName = CurveName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00850B20
	 * 		Name   -> Function LiveLink.LiveLinkRemapAsset.GetRemappedBoneName
	 * 		Flags  -> (Native, Event, Public, BlueprintEvent, Const)
	 * Parameters:
	 * 		class FName                                        BoneName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FName ULiveLinkRemapAsset::GetRemappedBoneName(const class FName& BoneName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LiveLink.LiveLinkRemapAsset.GetRemappedBoneName");
		
		ULiveLinkRemapAsset_GetRemappedBoneName_Params params {};
		params.BoneName = BoneName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULiveLinkRemapAsset.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULiveLinkRemapAsset::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LiveLink.LiveLinkRemapAsset");
		return ptr;
	}

}


