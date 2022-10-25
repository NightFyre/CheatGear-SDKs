/**
 * Name: Sea_of_Thieves
 * Version: 9505844
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x040A3020
	 * 		Name   -> Function AthenaObjectLinkage.EndPlayHandler.OnEndPlay
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEndPlayHandler::OnEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaObjectLinkage.EndPlayHandler.OnEndPlay");
		
		UEndPlayHandler_OnEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEndPlayHandler.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEndPlayHandler::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaObjectLinkage.EndPlayHandler");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x040A2DA0
	 * 		Name   -> Function AthenaObjectLinkage.LinkEndpointIdUtilities.IsValid
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FLinkEndpointId                             Id                                                         (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	bool ULinkEndpointIdUtilities::STATIC_IsValid(const struct FLinkEndpointId& Id)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaObjectLinkage.LinkEndpointIdUtilities.IsValid");
		
		ULinkEndpointIdUtilities_IsValid_Params params {};
		params.Id = Id;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x040A2D00
	 * 		Name   -> Function AthenaObjectLinkage.LinkEndpointIdUtilities.IsPathed
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FLinkEndpointId                             Id                                                         (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	bool ULinkEndpointIdUtilities::STATIC_IsPathed(const struct FLinkEndpointId& Id)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaObjectLinkage.LinkEndpointIdUtilities.IsPathed");
		
		ULinkEndpointIdUtilities_IsPathed_Params params {};
		params.Id = Id;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x040A2B80
	 * 		Name   -> Function AthenaObjectLinkage.LinkEndpointIdUtilities.CreateEndpointId
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      String                                                     (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	struct FLinkEndpointId ULinkEndpointIdUtilities::STATIC_CreateEndpointId(const class FString& String)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaObjectLinkage.LinkEndpointIdUtilities.CreateEndpointId");
		
		ULinkEndpointIdUtilities_CreateEndpointId_Params params {};
		params.String = String;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x040A2A90
	 * 		Name   -> Function AthenaObjectLinkage.LinkEndpointIdUtilities.Conv_LinkEndpointIdToString
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FLinkEndpointId                             Id                                                         (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	class FString ULinkEndpointIdUtilities::STATIC_Conv_LinkEndpointIdToString(const struct FLinkEndpointId& Id)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaObjectLinkage.LinkEndpointIdUtilities.Conv_LinkEndpointIdToString");
		
		ULinkEndpointIdUtilities_Conv_LinkEndpointIdToString_Params params {};
		params.Id = Id;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x040A2990
	 * 		Name   -> Function AthenaObjectLinkage.LinkEndpointIdUtilities.CombineEndpointIds
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FLinkEndpointId                             Root                                                       (ConstParm, Parm, OutParm, ReferenceParm)
	 * 		struct FLinkEndpointId                             path                                                       (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	struct FLinkEndpointId ULinkEndpointIdUtilities::STATIC_CombineEndpointIds(const struct FLinkEndpointId& Root, const struct FLinkEndpointId& path)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaObjectLinkage.LinkEndpointIdUtilities.CombineEndpointIds");
		
		ULinkEndpointIdUtilities_CombineEndpointIds_Params params {};
		params.Root = Root;
		params.path = path;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULinkEndpointIdUtilities.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULinkEndpointIdUtilities::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaObjectLinkage.LinkEndpointIdUtilities");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x040A3470
	 * 		Name   -> Function AthenaObjectLinkage.LinkEndpointInterface.ReceiveLink
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinkEndpointId                             Id                                                         (Parm)
	 * 		class AActor*                                      Instance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULinkEndpointInterface::ReceiveLink(const struct FLinkEndpointId& Id, class AActor* Instance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaObjectLinkage.LinkEndpointInterface.ReceiveLink");
		
		ULinkEndpointInterface_ReceiveLink_Params params {};
		params.Id = Id;
		params.Instance = Instance;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x040A2F90
	 * 		Name   -> Function AthenaObjectLinkage.LinkEndpointInterface.LoseLink
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinkEndpointId                             Id                                                         (Parm)
	 */
	void ULinkEndpointInterface::LoseLink(const struct FLinkEndpointId& Id)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaObjectLinkage.LinkEndpointInterface.LoseLink");
		
		ULinkEndpointInterface_LoseLink_Params params {};
		params.Id = Id;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULinkEndpointInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULinkEndpointInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaObjectLinkage.LinkEndpointInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x040A3A40
	 * 		Name   -> Function AthenaObjectLinkage.LinkerComponent.UnregisterLink
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLinkEndpointId                             SourceId                                                   (ConstParm, Parm, OutParm, ReferenceParm)
	 * 		struct FLinkEndpointId                             TargetID                                                   (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void ULinkerComponent::UnregisterLink(const struct FLinkEndpointId& SourceId, const struct FLinkEndpointId& TargetID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaObjectLinkage.LinkerComponent.UnregisterLink");
		
		ULinkerComponent_UnregisterLink_Params params {};
		params.SourceId = SourceId;
		params.TargetID = TargetID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x040A39A0
	 * 		Name   -> Function AthenaObjectLinkage.LinkerComponent.UnregisterEndpoint
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLinkEndpointId                             Id                                                         (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void ULinkerComponent::UnregisterEndpoint(const struct FLinkEndpointId& Id)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaObjectLinkage.LinkerComponent.UnregisterEndpoint");
		
		ULinkerComponent_UnregisterEndpoint_Params params {};
		params.Id = Id;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x040A3920
	 * 		Name   -> Function AthenaObjectLinkage.LinkerComponent.SetParent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Parent                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULinkerComponent::SetParent(class AActor* Parent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaObjectLinkage.LinkerComponent.SetParent");
		
		ULinkerComponent_SetParent_Params params {};
		params.Parent = Parent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x040A3630
	 * 		Name   -> Function AthenaObjectLinkage.LinkerComponent.RegisterLink
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLinkEndpointId                             SourceId                                                   (ConstParm, Parm, OutParm, ReferenceParm)
	 * 		struct FLinkEndpointId                             TargetID                                                   (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	EAddLinkResult ULinkerComponent::RegisterLink(const struct FLinkEndpointId& SourceId, const struct FLinkEndpointId& TargetID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaObjectLinkage.LinkerComponent.RegisterLink");
		
		ULinkerComponent_RegisterLink_Params params {};
		params.SourceId = SourceId;
		params.TargetID = TargetID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x040A3540
	 * 		Name   -> Function AthenaObjectLinkage.LinkerComponent.RegisterEndpoint
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FLinkEndpointId                             Id                                                         (ConstParm, Parm, OutParm, ReferenceParm)
	 * 		class AActor*                                      Source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	EAddEndpointResult ULinkerComponent::RegisterEndpoint(const struct FLinkEndpointId& Id, class AActor* Source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaObjectLinkage.LinkerComponent.RegisterEndpoint");
		
		ULinkerComponent_RegisterEndpoint_Params params {};
		params.Id = Id;
		params.Source = Source;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x040A3390
	 * 		Name   -> Function AthenaObjectLinkage.LinkerComponent.OnEndpointRemovedFromChild
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Child                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinkEndpointId                             Id                                                         (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void ULinkerComponent::OnEndpointRemovedFromChild(class AActor* Child, const struct FLinkEndpointId& Id)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaObjectLinkage.LinkerComponent.OnEndpointRemovedFromChild");
		
		ULinkerComponent_OnEndpointRemovedFromChild_Params params {};
		params.Child = Child;
		params.Id = Id;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x040A31B0
	 * 		Name   -> Function AthenaObjectLinkage.LinkerComponent.OnEndpointAddedToChild
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Child                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinkEndpointId                             Id                                                         (ConstParm, Parm, OutParm, ReferenceParm)
	 * 		class AActor*                                      Instance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULinkerComponent::OnEndpointAddedToChild(class AActor* Child, const struct FLinkEndpointId& Id, class AActor* Instance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaObjectLinkage.LinkerComponent.OnEndpointAddedToChild");
		
		ULinkerComponent_OnEndpointAddedToChild_Params params {};
		params.Child = Child;
		params.Id = Id;
		params.Instance = Instance;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x040A2EE0
	 * 		Name   -> Function AthenaObjectLinkage.LinkerComponent.LookupEndpoint
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FLinkEndpointId                             Id                                                         (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	class AActor* ULinkerComponent::LookupEndpoint(const struct FLinkEndpointId& Id)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaObjectLinkage.LinkerComponent.LookupEndpoint");
		
		ULinkerComponent_LookupEndpoint_Params params {};
		params.Id = Id;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x040A2CD0
	 * 		Name   -> Function AthenaObjectLinkage.LinkerComponent.GetNumSetLinks
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t ULinkerComponent::GetNumSetLinks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaObjectLinkage.LinkerComponent.GetNumSetLinks");
		
		ULinkerComponent_GetNumSetLinks_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x040A2CA0
	 * 		Name   -> Function AthenaObjectLinkage.LinkerComponent.GetNumRegisteredLinks
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t ULinkerComponent::GetNumRegisteredLinks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaObjectLinkage.LinkerComponent.GetNumRegisteredLinks");
		
		ULinkerComponent_GetNumRegisteredLinks_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x040A2C70
	 * 		Name   -> Function AthenaObjectLinkage.LinkerComponent.GetNumRegisteredEndpoints
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t ULinkerComponent::GetNumRegisteredEndpoints()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaObjectLinkage.LinkerComponent.GetNumRegisteredEndpoints");
		
		ULinkerComponent_GetNumRegisteredEndpoints_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x040A2C40
	 * 		Name   -> Function AthenaObjectLinkage.LinkerComponent.GetNumPendingLinks
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t ULinkerComponent::GetNumPendingLinks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaObjectLinkage.LinkerComponent.GetNumPendingLinks");
		
		ULinkerComponent_GetNumPendingLinks_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULinkerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULinkerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaObjectLinkage.LinkerComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x040A38A0
	 * 		Name   -> Function AthenaObjectLinkage.LinkerInterface.SetParent
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Parent                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULinkerInterface::SetParent(class AActor* Parent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaObjectLinkage.LinkerInterface.SetParent");
		
		ULinkerInterface_SetParent_Params params {};
		params.Parent = Parent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x040A37C0
	 * 		Name   -> Function AthenaObjectLinkage.LinkerInterface.RemoveLink
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinkEndpointId                             SourceId                                                   (Parm)
	 * 		struct FLinkEndpointId                             TargetID                                                   (Parm)
	 */
	void ULinkerInterface::RemoveLink(const struct FLinkEndpointId& SourceId, const struct FLinkEndpointId& TargetID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaObjectLinkage.LinkerInterface.RemoveLink");
		
		ULinkerInterface_RemoveLink_Params params {};
		params.SourceId = SourceId;
		params.TargetID = TargetID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x040A3730
	 * 		Name   -> Function AthenaObjectLinkage.LinkerInterface.RemoveEndpoint
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinkEndpointId                             Id                                                         (Parm)
	 */
	void ULinkerInterface::RemoveEndpoint(const struct FLinkEndpointId& Id)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaObjectLinkage.LinkerInterface.RemoveEndpoint");
		
		ULinkerInterface_RemoveEndpoint_Params params {};
		params.Id = Id;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x040A32C0
	 * 		Name   -> Function AthenaObjectLinkage.LinkerInterface.OnEndpointRemovedFromChild
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Child                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinkEndpointId                             Id                                                         (Parm)
	 */
	void ULinkerInterface::OnEndpointRemovedFromChild(class AActor* Child, const struct FLinkEndpointId& Id)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaObjectLinkage.LinkerInterface.OnEndpointRemovedFromChild");
		
		ULinkerInterface_OnEndpointRemovedFromChild_Params params {};
		params.Child = Child;
		params.Id = Id;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x040A30A0
	 * 		Name   -> Function AthenaObjectLinkage.LinkerInterface.OnEndpointAddedToChild
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Child                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinkEndpointId                             Id                                                         (Parm)
	 * 		class AActor*                                      Instance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULinkerInterface::OnEndpointAddedToChild(class AActor* Child, const struct FLinkEndpointId& Id, class AActor* Instance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaObjectLinkage.LinkerInterface.OnEndpointAddedToChild");
		
		ULinkerInterface_OnEndpointAddedToChild_Params params {};
		params.Child = Child;
		params.Id = Id;
		params.Instance = Instance;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x040A2E40
	 * 		Name   -> Function AthenaObjectLinkage.LinkerInterface.LookupEndpoint
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinkEndpointId                             Id                                                         (Parm)
	 */
	class AActor* ULinkerInterface::LookupEndpoint(const struct FLinkEndpointId& Id)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaObjectLinkage.LinkerInterface.LookupEndpoint");
		
		ULinkerInterface_LookupEndpoint_Params params {};
		params.Id = Id;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x040A28A0
	 * 		Name   -> Function AthenaObjectLinkage.LinkerInterface.AddLink
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinkEndpointId                             SourceId                                                   (Parm)
	 * 		struct FLinkEndpointId                             TargetID                                                   (Parm)
	 */
	bool ULinkerInterface::AddLink(const struct FLinkEndpointId& SourceId, const struct FLinkEndpointId& TargetID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaObjectLinkage.LinkerInterface.AddLink");
		
		ULinkerInterface_AddLink_Params params {};
		params.SourceId = SourceId;
		params.TargetID = TargetID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x040A27C0
	 * 		Name   -> Function AthenaObjectLinkage.LinkerInterface.AddEndpoint
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinkEndpointId                             Id                                                         (Parm)
	 * 		class AActor*                                      Instance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ULinkerInterface::AddEndpoint(const struct FLinkEndpointId& Id, class AActor* Instance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaObjectLinkage.LinkerInterface.AddEndpoint");
		
		ULinkerInterface_AddEndpoint_Params params {};
		params.Id = Id;
		params.Instance = Instance;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULinkerInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULinkerInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaObjectLinkage.LinkerInterface");
		return ptr;
	}

}


