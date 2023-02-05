/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x03546CE0
	 * 		Name   -> Function TypedElementRuntime.TypedElementAssetDataInterface.GetAssetData
	 * 		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FScriptTypedElementHandle                   InElementHandle                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FAssetData UTypedElementAssetDataInterface::GetAssetData(const struct FScriptTypedElementHandle& InElementHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TypedElementRuntime.TypedElementAssetDataInterface.GetAssetData");
		
		UTypedElementAssetDataInterface_GetAssetData_Params params {};
		params.InElementHandle = InElementHandle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03546AE0
	 * 		Name   -> Function TypedElementRuntime.TypedElementAssetDataInterface.GetAllReferencedAssetDatas
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FScriptTypedElementHandle                   InElementHandle                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	TArray<struct FAssetData> UTypedElementAssetDataInterface::GetAllReferencedAssetDatas(const struct FScriptTypedElementHandle& InElementHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TypedElementRuntime.TypedElementAssetDataInterface.GetAllReferencedAssetDatas");
		
		UTypedElementAssetDataInterface_GetAllReferencedAssetDatas_Params params {};
		params.InElementHandle = InElementHandle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTypedElementAssetDataInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTypedElementAssetDataInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TypedElementRuntime.TypedElementAssetDataInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03547740
	 * 		Name   -> Function TypedElementRuntime.TypedElementHierarchyInterface.GetParentElement
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FScriptTypedElementHandle                   InElementHandle                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bAllowCreate                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FScriptTypedElementHandle UTypedElementHierarchyInterface::GetParentElement(const struct FScriptTypedElementHandle& InElementHandle, bool bAllowCreate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TypedElementRuntime.TypedElementHierarchyInterface.GetParentElement");
		
		UTypedElementHierarchyInterface_GetParentElement_Params params {};
		params.InElementHandle = InElementHandle;
		params.bAllowCreate = bAllowCreate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03546FD0
	 * 		Name   -> Function TypedElementRuntime.TypedElementHierarchyInterface.GetChildElements
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FScriptTypedElementHandle                   InElementHandle                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FScriptTypedElementHandle>           OutElementHandles                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		bool                                               bAllowCreate                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTypedElementHierarchyInterface::GetChildElements(const struct FScriptTypedElementHandle& InElementHandle, TArray<struct FScriptTypedElementHandle>* OutElementHandles, bool bAllowCreate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TypedElementRuntime.TypedElementHierarchyInterface.GetChildElements");
		
		UTypedElementHierarchyInterface_GetChildElements_Params params {};
		params.InElementHandle = InElementHandle;
		params.bAllowCreate = bAllowCreate;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutElementHandles != nullptr)
			*OutElementHandles = params.OutElementHandles;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTypedElementHierarchyInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTypedElementHierarchyInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TypedElementRuntime.TypedElementHierarchyInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03547670
	 * 		Name   -> Function TypedElementRuntime.TypedElementObjectInterface.GetObjectClass
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FScriptTypedElementHandle                   InElementHandle                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class UClass* UTypedElementObjectInterface::GetObjectClass(const struct FScriptTypedElementHandle& InElementHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TypedElementRuntime.TypedElementObjectInterface.GetObjectClass");
		
		UTypedElementObjectInterface_GetObjectClass_Params params {};
		params.InElementHandle = InElementHandle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x035475A0
	 * 		Name   -> Function TypedElementRuntime.TypedElementObjectInterface.GetObject
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FScriptTypedElementHandle                   InElementHandle                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class UObject* UTypedElementObjectInterface::GetObject(const struct FScriptTypedElementHandle& InElementHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TypedElementRuntime.TypedElementObjectInterface.GetObject");
		
		UTypedElementObjectInterface_GetObject_Params params {};
		params.InElementHandle = InElementHandle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTypedElementObjectInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTypedElementObjectInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TypedElementRuntime.TypedElementObjectInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x035484A0
	 * 		Name   -> Function TypedElementRuntime.TypedElementSelectionInterface.SelectElement
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FScriptTypedElementHandle                   InElementHandle                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FScriptTypedElementListProxy                InSelectionSet                                             (Parm, NativeAccessSpecifierPublic)
	 * 		struct FTypedElementSelectionOptions               InSelectionOptions                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UTypedElementSelectionInterface::SelectElement(const struct FScriptTypedElementHandle& InElementHandle, const struct FScriptTypedElementListProxy& InSelectionSet, const struct FTypedElementSelectionOptions& InSelectionOptions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TypedElementRuntime.TypedElementSelectionInterface.SelectElement");
		
		UTypedElementSelectionInterface_SelectElement_Params params {};
		params.InElementHandle = InElementHandle;
		params.InSelectionSet = InSelectionSet;
		params.InSelectionOptions = InSelectionOptions;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03547FA0
	 * 		Name   -> Function TypedElementRuntime.TypedElementSelectionInterface.IsElementSelected
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FScriptTypedElementHandle                   InElementHandle                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FScriptTypedElementListProxy                InSelectionSet                                             (ConstParm, Parm, NativeAccessSpecifierPublic)
	 * 		struct FTypedElementIsSelectedOptions              InSelectionOptions                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UTypedElementSelectionInterface::IsElementSelected(const struct FScriptTypedElementHandle& InElementHandle, const struct FScriptTypedElementListProxy& InSelectionSet, const struct FTypedElementIsSelectedOptions& InSelectionOptions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TypedElementRuntime.TypedElementSelectionInterface.IsElementSelected");
		
		UTypedElementSelectionInterface_IsElementSelected_Params params {};
		params.InElementHandle = InElementHandle;
		params.InSelectionSet = InSelectionSet;
		params.InSelectionOptions = InSelectionOptions;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x035479B0
	 * 		Name   -> Function TypedElementRuntime.TypedElementSelectionInterface.GetSelectionElement
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FScriptTypedElementHandle                   InElementHandle                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FScriptTypedElementListProxy                InCurrentSelection                                         (ConstParm, Parm, NativeAccessSpecifierPublic)
	 * 		ETypedElementSelectionMethod                       InSelectionMethod                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FScriptTypedElementHandle UTypedElementSelectionInterface::GetSelectionElement(const struct FScriptTypedElementHandle& InElementHandle, const struct FScriptTypedElementListProxy& InCurrentSelection, ETypedElementSelectionMethod InSelectionMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TypedElementRuntime.TypedElementSelectionInterface.GetSelectionElement");
		
		UTypedElementSelectionInterface_GetSelectionElement_Params params {};
		params.InElementHandle = InElementHandle;
		params.InCurrentSelection = InCurrentSelection;
		params.InSelectionMethod = InSelectionMethod;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03546540
	 * 		Name   -> Function TypedElementRuntime.TypedElementSelectionInterface.DeselectElement
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FScriptTypedElementHandle                   InElementHandle                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FScriptTypedElementListProxy                InSelectionSet                                             (Parm, NativeAccessSpecifierPublic)
	 * 		struct FTypedElementSelectionOptions               InSelectionOptions                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UTypedElementSelectionInterface::DeselectElement(const struct FScriptTypedElementHandle& InElementHandle, const struct FScriptTypedElementListProxy& InSelectionSet, const struct FTypedElementSelectionOptions& InSelectionOptions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TypedElementRuntime.TypedElementSelectionInterface.DeselectElement");
		
		UTypedElementSelectionInterface_DeselectElement_Params params {};
		params.InElementHandle = InElementHandle;
		params.InSelectionSet = InSelectionSet;
		params.InSelectionOptions = InSelectionOptions;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x035460C0
	 * 		Name   -> Function TypedElementRuntime.TypedElementSelectionInterface.CanSelectElement
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FScriptTypedElementHandle                   InElementHandle                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FTypedElementSelectionOptions               InSelectionOptions                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UTypedElementSelectionInterface::CanSelectElement(const struct FScriptTypedElementHandle& InElementHandle, const struct FTypedElementSelectionOptions& InSelectionOptions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TypedElementRuntime.TypedElementSelectionInterface.CanSelectElement");
		
		UTypedElementSelectionInterface_CanSelectElement_Params params {};
		params.InElementHandle = InElementHandle;
		params.InSelectionOptions = InSelectionOptions;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03545E90
	 * 		Name   -> Function TypedElementRuntime.TypedElementSelectionInterface.CanDeselectElement
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FScriptTypedElementHandle                   InElementHandle                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FTypedElementSelectionOptions               InSelectionOptions                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UTypedElementSelectionInterface::CanDeselectElement(const struct FScriptTypedElementHandle& InElementHandle, const struct FTypedElementSelectionOptions& InSelectionOptions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TypedElementRuntime.TypedElementSelectionInterface.CanDeselectElement");
		
		UTypedElementSelectionInterface_CanDeselectElement_Params params {};
		params.InElementHandle = InElementHandle;
		params.InSelectionOptions = InSelectionOptions;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03545C60
	 * 		Name   -> Function TypedElementRuntime.TypedElementSelectionInterface.AllowSelectionModifiers
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FScriptTypedElementHandle                   InElementHandle                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FScriptTypedElementListProxy                InSelectionSet                                             (ConstParm, Parm, NativeAccessSpecifierPublic)
	 */
	bool UTypedElementSelectionInterface::AllowSelectionModifiers(const struct FScriptTypedElementHandle& InElementHandle, const struct FScriptTypedElementListProxy& InSelectionSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TypedElementRuntime.TypedElementSelectionInterface.AllowSelectionModifiers");
		
		UTypedElementSelectionInterface_AllowSelectionModifiers_Params params {};
		params.InElementHandle = InElementHandle;
		params.InSelectionSet = InSelectionSet;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTypedElementSelectionInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTypedElementSelectionInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TypedElementRuntime.TypedElementSelectionInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03548A40
	 * 		Name   -> Function TypedElementRuntime.TypedElementSelectionSet.SetSelection
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FScriptTypedElementHandle>           InElementHandles                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FTypedElementSelectionOptions               InSelectionOptions                                         (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UTypedElementSelectionSet::SetSelection(TArray<struct FScriptTypedElementHandle> InElementHandles, const struct FTypedElementSelectionOptions& InSelectionOptions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TypedElementRuntime.TypedElementSelectionSet.SetSelection");
		
		UTypedElementSelectionSet_SetSelection_Params params {};
		params.InElementHandles = InElementHandles;
		params.InSelectionOptions = InSelectionOptions;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03548770
	 * 		Name   -> Function TypedElementRuntime.TypedElementSelectionSet.SelectElements
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FScriptTypedElementHandle>           InElementHandles                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FTypedElementSelectionOptions               InSelectionOptions                                         (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UTypedElementSelectionSet::SelectElements(TArray<struct FScriptTypedElementHandle> InElementHandles, const struct FTypedElementSelectionOptions& InSelectionOptions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TypedElementRuntime.TypedElementSelectionSet.SelectElements");
		
		UTypedElementSelectionSet_SelectElements_Params params {};
		params.InElementHandles = InElementHandles;
		params.InSelectionOptions = InSelectionOptions;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03548660
	 * 		Name   -> Function TypedElementRuntime.TypedElementSelectionSet.SelectElement
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FScriptTypedElementHandle                   InElementHandle                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FTypedElementSelectionOptions               InSelectionOptions                                         (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UTypedElementSelectionSet::SelectElement(const struct FScriptTypedElementHandle& InElementHandle, const struct FTypedElementSelectionOptions& InSelectionOptions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TypedElementRuntime.TypedElementSelectionSet.SelectElement");
		
		UTypedElementSelectionSet_SelectElement_Params params {};
		params.InElementHandle = InElementHandle;
		params.InSelectionOptions = InSelectionOptions;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x035483C0
	 * 		Name   -> Function TypedElementRuntime.TypedElementSelectionSet.RestoreSelectionState
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FTypedElementSelectionSetState              InSelectionState                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UTypedElementSelectionSet::RestoreSelectionState(const struct FTypedElementSelectionSetState& InSelectionState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TypedElementRuntime.TypedElementSelectionSet.RestoreSelectionState");
		
		UTypedElementSelectionSet_RestoreSelectionState_Params params {};
		params.InSelectionState = InSelectionState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> DelegateFunction TypedElementRuntime.TypedElementSelectionSet.OnPreChangeDynamic__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class UTypedElementSelectionSet*                   SelectionSet                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTypedElementSelectionSet::OnPreChangeDynamic__DelegateSignature(class UTypedElementSelectionSet* SelectionSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction TypedElementRuntime.TypedElementSelectionSet.OnPreChangeDynamic__DelegateSignature");
		
		UTypedElementSelectionSet_OnPreChangeDynamic__DelegateSignature_Params params {};
		params.SelectionSet = SelectionSet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> DelegateFunction TypedElementRuntime.TypedElementSelectionSet.OnChangeDynamic__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class UTypedElementSelectionSet*                   SelectionSet                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTypedElementSelectionSet::OnChangeDynamic__DelegateSignature(class UTypedElementSelectionSet* SelectionSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction TypedElementRuntime.TypedElementSelectionSet.OnChangeDynamic__DelegateSignature");
		
		UTypedElementSelectionSet_OnChangeDynamic__DelegateSignature_Params params {};
		params.SelectionSet = SelectionSet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03548270
	 * 		Name   -> Function TypedElementRuntime.TypedElementSelectionSet.K2_GetSelectedElementHandles
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
	 * Parameters:
	 * 		class UClass*                                      InBaseInterfaceType                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FScriptTypedElementHandle> UTypedElementSelectionSet::K2_GetSelectedElementHandles(class UClass* InBaseInterfaceType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TypedElementRuntime.TypedElementSelectionSet.K2_GetSelectedElementHandles");
		
		UTypedElementSelectionSet_K2_GetSelectedElementHandles_Params params {};
		params.InBaseInterfaceType = InBaseInterfaceType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03548160
	 * 		Name   -> Function TypedElementRuntime.TypedElementSelectionSet.IsElementSelected
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FScriptTypedElementHandle                   InElementHandle                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FTypedElementIsSelectedOptions              InSelectionOptions                                         (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UTypedElementSelectionSet::IsElementSelected(const struct FScriptTypedElementHandle& InElementHandle, const struct FTypedElementIsSelectedOptions& InSelectionOptions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TypedElementRuntime.TypedElementSelectionSet.IsElementSelected");
		
		UTypedElementSelectionSet_IsElementSelected_Params params {};
		params.InElementHandle = InElementHandle;
		params.InSelectionOptions = InSelectionOptions;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03547E90
	 * 		Name   -> Function TypedElementRuntime.TypedElementSelectionSet.HasSelectedObjects
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
	 * Parameters:
	 * 		class UClass*                                      InRequiredClass                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTypedElementSelectionSet::HasSelectedObjects(class UClass* InRequiredClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TypedElementRuntime.TypedElementSelectionSet.HasSelectedObjects");
		
		UTypedElementSelectionSet_HasSelectedObjects_Params params {};
		params.InRequiredClass = InRequiredClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03547DF0
	 * 		Name   -> Function TypedElementRuntime.TypedElementSelectionSet.HasSelectedElements
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
	 * Parameters:
	 * 		class UClass*                                      InBaseInterfaceType                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTypedElementSelectionSet::HasSelectedElements(class UClass* InBaseInterfaceType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TypedElementRuntime.TypedElementSelectionSet.HasSelectedElements");
		
		UTypedElementSelectionSet_HasSelectedElements_Params params {};
		params.InBaseInterfaceType = InBaseInterfaceType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03547CE0
	 * 		Name   -> Function TypedElementRuntime.TypedElementSelectionSet.GetTopSelectedObject
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UClass*                                      InRequiredClass                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UObject* UTypedElementSelectionSet::GetTopSelectedObject(class UClass* InRequiredClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TypedElementRuntime.TypedElementSelectionSet.GetTopSelectedObject");
		
		UTypedElementSelectionSet_GetTopSelectedObject_Params params {};
		params.InRequiredClass = InRequiredClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03547BA0
	 * 		Name   -> Function TypedElementRuntime.TypedElementSelectionSet.GetSelectionElement
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FScriptTypedElementHandle                   InElementHandle                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		ETypedElementSelectionMethod                       InSelectionMethod                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FScriptTypedElementHandle UTypedElementSelectionSet::GetSelectionElement(const struct FScriptTypedElementHandle& InElementHandle, ETypedElementSelectionMethod InSelectionMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TypedElementRuntime.TypedElementSelectionSet.GetSelectionElement");
		
		UTypedElementSelectionSet_GetSelectionElement_Params params {};
		params.InElementHandle = InElementHandle;
		params.InSelectionMethod = InSelectionMethod;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03547870
	 * 		Name   -> Function TypedElementRuntime.TypedElementSelectionSet.GetSelectedObjects
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
	 * Parameters:
	 * 		class UClass*                                      InRequiredClass                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class UObject*> UTypedElementSelectionSet::GetSelectedObjects(class UClass* InRequiredClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TypedElementRuntime.TypedElementSelectionSet.GetSelectedObjects");
		
		UTypedElementSelectionSet_GetSelectedObjects_Params params {};
		params.InRequiredClass = InRequiredClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03547570
	 * 		Name   -> Function TypedElementRuntime.TypedElementSelectionSet.GetNumSelectedElements
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UTypedElementSelectionSet::GetNumSelectedElements()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TypedElementRuntime.TypedElementSelectionSet.GetNumSelectedElements");
		
		UTypedElementSelectionSet_GetNumSelectedElements_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03547170
	 * 		Name   -> Function TypedElementRuntime.TypedElementSelectionSet.GetCurrentSelectionState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FTypedElementSelectionSetState UTypedElementSelectionSet::GetCurrentSelectionState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TypedElementRuntime.TypedElementSelectionSet.GetCurrentSelectionState");
		
		UTypedElementSelectionSet_GetCurrentSelectionState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03546EC0
	 * 		Name   -> Function TypedElementRuntime.TypedElementSelectionSet.GetBottomSelectedObject
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UClass*                                      InRequiredClass                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UObject* UTypedElementSelectionSet::GetBottomSelectedObject(class UClass* InRequiredClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TypedElementRuntime.TypedElementSelectionSet.GetBottomSelectedObject");
		
		UTypedElementSelectionSet_GetBottomSelectedObject_Params params {};
		params.InRequiredClass = InRequiredClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03546810
	 * 		Name   -> Function TypedElementRuntime.TypedElementSelectionSet.DeselectElements
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<struct FScriptTypedElementHandle>           InElementHandles                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FTypedElementSelectionOptions               InSelectionOptions                                         (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UTypedElementSelectionSet::DeselectElements(TArray<struct FScriptTypedElementHandle> InElementHandles, const struct FTypedElementSelectionOptions& InSelectionOptions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TypedElementRuntime.TypedElementSelectionSet.DeselectElements");
		
		UTypedElementSelectionSet_DeselectElements_Params params {};
		params.InElementHandles = InElementHandles;
		params.InSelectionOptions = InSelectionOptions;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03546700
	 * 		Name   -> Function TypedElementRuntime.TypedElementSelectionSet.DeselectElement
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FScriptTypedElementHandle                   InElementHandle                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FTypedElementSelectionOptions               InSelectionOptions                                         (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UTypedElementSelectionSet::DeselectElement(const struct FScriptTypedElementHandle& InElementHandle, const struct FTypedElementSelectionOptions& InSelectionOptions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TypedElementRuntime.TypedElementSelectionSet.DeselectElement");
		
		UTypedElementSelectionSet_DeselectElement_Params params {};
		params.InElementHandle = InElementHandle;
		params.InSelectionOptions = InSelectionOptions;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03546440
	 * 		Name   -> Function TypedElementRuntime.TypedElementSelectionSet.CountSelectedObjects
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
	 * Parameters:
	 * 		class UClass*                                      InRequiredClass                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UTypedElementSelectionSet::CountSelectedObjects(class UClass* InRequiredClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TypedElementRuntime.TypedElementSelectionSet.CountSelectedObjects");
		
		UTypedElementSelectionSet_CountSelectedObjects_Params params {};
		params.InRequiredClass = InRequiredClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x035463A0
	 * 		Name   -> Function TypedElementRuntime.TypedElementSelectionSet.CountSelectedElements
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
	 * Parameters:
	 * 		class UClass*                                      InBaseInterfaceType                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UTypedElementSelectionSet::CountSelectedElements(class UClass* InBaseInterfaceType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TypedElementRuntime.TypedElementSelectionSet.CountSelectedElements");
		
		UTypedElementSelectionSet_CountSelectedElements_Params params {};
		params.InBaseInterfaceType = InBaseInterfaceType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x035462F0
	 * 		Name   -> Function TypedElementRuntime.TypedElementSelectionSet.ClearSelection
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FTypedElementSelectionOptions               InSelectionOptions                                         (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UTypedElementSelectionSet::ClearSelection(const struct FTypedElementSelectionOptions& InSelectionOptions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TypedElementRuntime.TypedElementSelectionSet.ClearSelection");
		
		UTypedElementSelectionSet_ClearSelection_Params params {};
		params.InSelectionOptions = InSelectionOptions;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x035461E0
	 * 		Name   -> Function TypedElementRuntime.TypedElementSelectionSet.CanSelectElement
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FScriptTypedElementHandle                   InElementHandle                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FTypedElementSelectionOptions               InSelectionOptions                                         (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UTypedElementSelectionSet::CanSelectElement(const struct FScriptTypedElementHandle& InElementHandle, const struct FTypedElementSelectionOptions& InSelectionOptions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TypedElementRuntime.TypedElementSelectionSet.CanSelectElement");
		
		UTypedElementSelectionSet_CanSelectElement_Params params {};
		params.InElementHandle = InElementHandle;
		params.InSelectionOptions = InSelectionOptions;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03545FB0
	 * 		Name   -> Function TypedElementRuntime.TypedElementSelectionSet.CanDeselectElement
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FScriptTypedElementHandle                   InElementHandle                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FTypedElementSelectionOptions               InSelectionOptions                                         (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UTypedElementSelectionSet::CanDeselectElement(const struct FScriptTypedElementHandle& InElementHandle, const struct FTypedElementSelectionOptions& InSelectionOptions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TypedElementRuntime.TypedElementSelectionSet.CanDeselectElement");
		
		UTypedElementSelectionSet_CanDeselectElement_Params params {};
		params.InElementHandle = InElementHandle;
		params.InSelectionOptions = InSelectionOptions;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03545DD0
	 * 		Name   -> Function TypedElementRuntime.TypedElementSelectionSet.AllowSelectionModifiers
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FScriptTypedElementHandle                   InElementHandle                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UTypedElementSelectionSet::AllowSelectionModifiers(const struct FScriptTypedElementHandle& InElementHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TypedElementRuntime.TypedElementSelectionSet.AllowSelectionModifiers");
		
		UTypedElementSelectionSet_AllowSelectionModifiers_Params params {};
		params.InElementHandle = InElementHandle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTypedElementSelectionSet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTypedElementSelectionSet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TypedElementRuntime.TypedElementSelectionSet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03548B90
	 * 		Name   -> Function TypedElementRuntime.TypedElementSelectionSetLibrary.SetSelectionFromList
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UTypedElementSelectionSet*                   SelectionSet                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FScriptTypedElementListProxy                ElementList                                                (ConstParm, Parm, NativeAccessSpecifierPublic)
	 * 		struct FTypedElementSelectionOptions               SelectionOptions                                           (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UTypedElementSelectionSetLibrary::STATIC_SetSelectionFromList(class UTypedElementSelectionSet* SelectionSet, const struct FScriptTypedElementListProxy& ElementList, const struct FTypedElementSelectionOptions& SelectionOptions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TypedElementRuntime.TypedElementSelectionSetLibrary.SetSelectionFromList");
		
		UTypedElementSelectionSetLibrary_SetSelectionFromList_Params params {};
		params.SelectionSet = SelectionSet;
		params.ElementList = ElementList;
		params.SelectionOptions = SelectionOptions;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x035488C0
	 * 		Name   -> Function TypedElementRuntime.TypedElementSelectionSetLibrary.SelectElementsFromList
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UTypedElementSelectionSet*                   SelectionSet                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FScriptTypedElementListProxy                ElementList                                                (ConstParm, Parm, NativeAccessSpecifierPublic)
	 * 		struct FTypedElementSelectionOptions               SelectionOptions                                           (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UTypedElementSelectionSetLibrary::STATIC_SelectElementsFromList(class UTypedElementSelectionSet* SelectionSet, const struct FScriptTypedElementListProxy& ElementList, const struct FTypedElementSelectionOptions& SelectionOptions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TypedElementRuntime.TypedElementSelectionSetLibrary.SelectElementsFromList");
		
		UTypedElementSelectionSetLibrary_SelectElementsFromList_Params params {};
		params.SelectionSet = SelectionSet;
		params.ElementList = ElementList;
		params.SelectionOptions = SelectionOptions;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03547440
	 * 		Name   -> Function TypedElementRuntime.TypedElementSelectionSetLibrary.GetNormalizedSelection
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UTypedElementSelectionSet*                   SelectionSet                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FTypedElementSelectionNormalizationOptions  NormalizationOptions                                       (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FScriptTypedElementListProxy UTypedElementSelectionSetLibrary::STATIC_GetNormalizedSelection(class UTypedElementSelectionSet* SelectionSet, const struct FTypedElementSelectionNormalizationOptions& NormalizationOptions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TypedElementRuntime.TypedElementSelectionSetLibrary.GetNormalizedSelection");
		
		UTypedElementSelectionSetLibrary_GetNormalizedSelection_Params params {};
		params.SelectionSet = SelectionSet;
		params.NormalizationOptions = NormalizationOptions;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03547270
	 * 		Name   -> Function TypedElementRuntime.TypedElementSelectionSetLibrary.GetNormalizedElementList
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UTypedElementSelectionSet*                   SelectionSet                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FScriptTypedElementListProxy                ElementList                                                (ConstParm, Parm, NativeAccessSpecifierPublic)
	 * 		struct FTypedElementSelectionNormalizationOptions  NormalizationOptions                                       (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	struct FScriptTypedElementListProxy UTypedElementSelectionSetLibrary::STATIC_GetNormalizedElementList(class UTypedElementSelectionSet* SelectionSet, const struct FScriptTypedElementListProxy& ElementList, const struct FTypedElementSelectionNormalizationOptions& NormalizationOptions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TypedElementRuntime.TypedElementSelectionSetLibrary.GetNormalizedElementList");
		
		UTypedElementSelectionSetLibrary_GetNormalizedElementList_Params params {};
		params.SelectionSet = SelectionSet;
		params.ElementList = ElementList;
		params.NormalizationOptions = NormalizationOptions;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03546960
	 * 		Name   -> Function TypedElementRuntime.TypedElementSelectionSetLibrary.DeselectElementsFromList
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UTypedElementSelectionSet*                   SelectionSet                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FScriptTypedElementListProxy                ElementList                                                (ConstParm, Parm, NativeAccessSpecifierPublic)
	 * 		struct FTypedElementSelectionOptions               SelectionOptions                                           (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UTypedElementSelectionSetLibrary::STATIC_DeselectElementsFromList(class UTypedElementSelectionSet* SelectionSet, const struct FScriptTypedElementListProxy& ElementList, const struct FTypedElementSelectionOptions& SelectionOptions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TypedElementRuntime.TypedElementSelectionSetLibrary.DeselectElementsFromList");
		
		UTypedElementSelectionSetLibrary_DeselectElementsFromList_Params params {};
		params.SelectionSet = SelectionSet;
		params.ElementList = ElementList;
		params.SelectionOptions = SelectionOptions;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTypedElementSelectionSetLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTypedElementSelectionSetLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class TypedElementRuntime.TypedElementSelectionSetLibrary");
		return ptr;
	}

}


