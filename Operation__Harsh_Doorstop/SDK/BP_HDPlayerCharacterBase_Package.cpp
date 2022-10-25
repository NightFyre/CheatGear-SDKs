/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.EventGetFocalPoint
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	struct FVector ABP_HDPlayerCharacterBase_C::EventGetFocalPoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.EventGetFocalPoint");
		
		ABP_HDPlayerCharacterBase_C_EventGetFocalPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.UpdateCharMesh
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USkeletalMesh*                               NewMesh                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bUpdateFPPMesh                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HDPlayerCharacterBase_C::UpdateCharMesh(class USkeletalMesh* NewMesh, bool bUpdateFPPMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.UpdateCharMesh");
		
		ABP_HDPlayerCharacterBase_C_UpdateCharMesh_Params params {};
		params.NewMesh = NewMesh;
		params.bUpdateFPPMesh = bUpdateFPPMesh;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.SetSuppressionCompIsActive
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         PrimComp                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bNewActive                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HDPlayerCharacterBase_C::SetSuppressionCompIsActive(class UPrimitiveComponent* PrimComp, bool bNewActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.SetSuppressionCompIsActive");
		
		ABP_HDPlayerCharacterBase_C_SetSuppressionCompIsActive_Params params {};
		params.PrimComp = PrimComp;
		params.bNewActive = bNewActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.SetSuppressionActive
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bActive                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HDPlayerCharacterBase_C::SetSuppressionActive(bool bActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.SetSuppressionActive");
		
		ABP_HDPlayerCharacterBase_C_SetSuppressionActive_Params params {};
		params.bActive = bActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.CalcOutpostEnemiesNearbyRestriction
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bAreEnemiesNearby                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HDPlayerCharacterBase_C::CalcOutpostEnemiesNearbyRestriction(bool* bAreEnemiesNearby)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.CalcOutpostEnemiesNearbyRestriction");
		
		ABP_HDPlayerCharacterBase_C_CalcOutpostEnemiesNearbyRestriction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bAreEnemiesNearby != nullptr)
			*bAreEnemiesNearby = params.bAreEnemiesNearby;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.CalcRallypointEnemiesNearbyRestriction
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bAreEnemiesNearby                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HDPlayerCharacterBase_C::CalcRallypointEnemiesNearbyRestriction(bool* bAreEnemiesNearby)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.CalcRallypointEnemiesNearbyRestriction");
		
		ABP_HDPlayerCharacterBase_C_CalcRallypointEnemiesNearbyRestriction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bAreEnemiesNearby != nullptr)
			*bAreEnemiesNearby = params.bAreEnemiesNearby;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.IsOutpostNumberLimitReached
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bNumberLimitReached                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HDPlayerCharacterBase_C::IsOutpostNumberLimitReached(bool* bNumberLimitReached)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.IsOutpostNumberLimitReached");
		
		ABP_HDPlayerCharacterBase_C_IsOutpostNumberLimitReached_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bNumberLimitReached != nullptr)
			*bNumberLimitReached = params.bNumberLimitReached;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.IsRallypointNumberLimitReached
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bNumberLimitReached                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HDPlayerCharacterBase_C::IsRallypointNumberLimitReached(bool* bNumberLimitReached)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.IsRallypointNumberLimitReached");
		
		ABP_HDPlayerCharacterBase_C_IsRallypointNumberLimitReached_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bNumberLimitReached != nullptr)
			*bNumberLimitReached = params.bNumberLimitReached;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.CalcOutpostDistanceRestriction
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bIsOutpostDistanceRestricted                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HDPlayerCharacterBase_C::CalcOutpostDistanceRestriction(bool* bIsOutpostDistanceRestricted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.CalcOutpostDistanceRestriction");
		
		ABP_HDPlayerCharacterBase_C_CalcOutpostDistanceRestriction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsOutpostDistanceRestricted != nullptr)
			*bIsOutpostDistanceRestricted = params.bIsOutpostDistanceRestricted;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.CalcRallypointDistanceRestriction
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bIsRallypointDistanceRestricted                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HDPlayerCharacterBase_C::CalcRallypointDistanceRestriction(bool* bIsRallypointDistanceRestricted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.CalcRallypointDistanceRestriction");
		
		ABP_HDPlayerCharacterBase_C_CalcRallypointDistanceRestriction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsRallypointDistanceRestricted != nullptr)
			*bIsRallypointDistanceRestricted = params.bIsRallypointDistanceRestricted;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.GetIsSpawnedRallypointValid
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bIsSpawnedRallypointValid                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HDPlayerCharacterBase_C::GetIsSpawnedRallypointValid(bool* bIsSpawnedRallypointValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.GetIsSpawnedRallypointValid");
		
		ABP_HDPlayerCharacterBase_C_GetIsSpawnedRallypointValid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsSpawnedRallypointValid != nullptr)
			*bIsSpawnedRallypointValid = params.bIsSpawnedRallypointValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.GetIsSpawnedOutpostValid
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bIsSpawnedOutpostValid                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HDPlayerCharacterBase_C::GetIsSpawnedOutpostValid(bool* bIsSpawnedOutpostValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.GetIsSpawnedOutpostValid");
		
		ABP_HDPlayerCharacterBase_C_GetIsSpawnedOutpostValid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsSpawnedOutpostValid != nullptr)
			*bIsSpawnedOutpostValid = params.bIsSpawnedOutpostValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.GetProneMountPosition
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     BoxSize                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Distance                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MaxHeight                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MinHeight                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MinSpace                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bCouldMount                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     MountPosition                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDPlayerCharacterBase_C::GetProneMountPosition(const struct FVector& BoxSize, float Distance, float MaxHeight, float MinHeight, float MinSpace, bool* bCouldMount, struct FVector* MountPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.GetProneMountPosition");
		
		ABP_HDPlayerCharacterBase_C_GetProneMountPosition_Params params {};
		params.BoxSize = BoxSize;
		params.Distance = Distance;
		params.MaxHeight = MaxHeight;
		params.MinHeight = MinHeight;
		params.MinSpace = MinSpace;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bCouldMount != nullptr)
			*bCouldMount = params.bCouldMount;
		if (MountPosition != nullptr)
			*MountPosition = params.MountPosition;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.AlignSights
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              MinSightDistance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDPlayerCharacterBase_C::AlignSights(float MinSightDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.AlignSights");
		
		ABP_HDPlayerCharacterBase_C_AlignSights_Params params {};
		params.MinSightDistance = MinSightDistance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.GetMountPosition
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              WallDistance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              TraceRadius                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              CornerDistance                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              CapsuleHeight                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bCouldMount                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Position                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FTransform                                  Transform                                                  (Parm, OutParm, IsPlainOldData, NoDestructor)
	 */
	void ABP_HDPlayerCharacterBase_C::GetMountPosition(const struct FVector& Direction, float WallDistance, float TraceRadius, float CornerDistance, float CapsuleHeight, bool* bCouldMount, struct FVector* Position, struct FTransform* Transform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.GetMountPosition");
		
		ABP_HDPlayerCharacterBase_C_GetMountPosition_Params params {};
		params.Direction = Direction;
		params.WallDistance = WallDistance;
		params.TraceRadius = TraceRadius;
		params.CornerDistance = CornerDistance;
		params.CapsuleHeight = CapsuleHeight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bCouldMount != nullptr)
			*bCouldMount = params.bCouldMount;
		if (Position != nullptr)
			*Position = params.Position;
		if (Transform != nullptr)
			*Transform = params.Transform;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.OnRep_bSpatializedVOIPTalker
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HDPlayerCharacterBase_C::OnRep_bSpatializedVOIPTalker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.OnRep_bSpatializedVOIPTalker");
		
		ABP_HDPlayerCharacterBase_C_OnRep_bSpatializedVOIPTalker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.HasSquadLeaderKit
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bRequireRallyPointAbility                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bUsingSquadLeaderKit                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HDPlayerCharacterBase_C::HasSquadLeaderKit(bool bRequireRallyPointAbility, bool* bUsingSquadLeaderKit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.HasSquadLeaderKit");
		
		ABP_HDPlayerCharacterBase_C_HasSquadLeaderKit_Params params {};
		params.bRequireRallyPointAbility = bRequireRallyPointAbility;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bUsingSquadLeaderKit != nullptr)
			*bUsingSquadLeaderKit = params.bUsingSquadLeaderKit;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.IsSquadLeader
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bSquadLeader                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HDPlayerCharacterBase_C::IsSquadLeader(bool* bSquadLeader)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.IsSquadLeader");
		
		ABP_HDPlayerCharacterBase_C_IsSquadLeader_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bSquadLeader != nullptr)
			*bSquadLeader = params.bSquadLeader;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.GetSquadState
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AHDSquadState*                               SquadState                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDPlayerCharacterBase_C::GetSquadState(class AHDSquadState** SquadState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.GetSquadState");
		
		ABP_HDPlayerCharacterBase_C_GetSquadState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SquadState != nullptr)
			*SquadState = params.SquadState;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.CanSelectAnyRadialMenuOption
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bSelectable                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HDPlayerCharacterBase_C::CanSelectAnyRadialMenuOption(bool* bSelectable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.CanSelectAnyRadialMenuOption");
		
		ABP_HDPlayerCharacterBase_C_CanSelectAnyRadialMenuOption_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bSelectable != nullptr)
			*bSelectable = params.bSelectable;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.RadialMenuCanSelectOutpost
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bSelectable                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HDPlayerCharacterBase_C::RadialMenuCanSelectOutpost(bool* bSelectable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.RadialMenuCanSelectOutpost");
		
		ABP_HDPlayerCharacterBase_C_RadialMenuCanSelectOutpost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bSelectable != nullptr)
			*bSelectable = params.bSelectable;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.RadialMenuCanSelectRallypoint
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bSelectable                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HDPlayerCharacterBase_C::RadialMenuCanSelectRallypoint(bool* bSelectable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.RadialMenuCanSelectRallypoint");
		
		ABP_HDPlayerCharacterBase_C_RadialMenuCanSelectRallypoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bSelectable != nullptr)
			*bSelectable = params.bSelectable;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.RadialMenuCanSelectSpot
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bSelectable                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HDPlayerCharacterBase_C::RadialMenuCanSelectSpot(bool* bSelectable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.RadialMenuCanSelectSpot");
		
		ABP_HDPlayerCharacterBase_C_RadialMenuCanSelectSpot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bSelectable != nullptr)
			*bSelectable = params.bSelectable;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.RadialMenuSelectOutpost
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HDPlayerCharacterBase_C::RadialMenuSelectOutpost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.RadialMenuSelectOutpost");
		
		ABP_HDPlayerCharacterBase_C_RadialMenuSelectOutpost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.RadialMenuSelectRallypoint
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HDPlayerCharacterBase_C::RadialMenuSelectRallypoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.RadialMenuSelectRallypoint");
		
		ABP_HDPlayerCharacterBase_C_RadialMenuSelectRallypoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.RadialMenuSelectSpot
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HDPlayerCharacterBase_C::RadialMenuSelectSpot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.RadialMenuSelectSpot");
		
		ABP_HDPlayerCharacterBase_C_RadialMenuSelectSpot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.SelectRadialMenuItem
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Category                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        SubItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDPlayerCharacterBase_C::SelectRadialMenuItem(const class FName& Category, const class FName& SubItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.SelectRadialMenuItem");
		
		ABP_HDPlayerCharacterBase_C_SelectRadialMenuItem_Params params {};
		params.Category = Category;
		params.SubItem = SubItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.SpawnAndInitDeployableSPAtPawn
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      SPDeployableClass                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     SpawnOffset                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_HDProj_SPDeployableBase_C*               SpawnedDeployableSP                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDPlayerCharacterBase_C::SpawnAndInitDeployableSPAtPawn(class UClass* SPDeployableClass, const struct FVector& SpawnOffset, class ABP_HDProj_SPDeployableBase_C** SpawnedDeployableSP)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.SpawnAndInitDeployableSPAtPawn");
		
		ABP_HDPlayerCharacterBase_C_SpawnAndInitDeployableSPAtPawn_Params params {};
		params.SPDeployableClass = SPDeployableClass;
		params.SpawnOffset = SpawnOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SpawnedDeployableSP != nullptr)
			*SpawnedDeployableSP = params.SpawnedDeployableSP;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.LeanDebug
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HDPlayerCharacterBase_C::LeanDebug()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.LeanDebug");
		
		ABP_HDPlayerCharacterBase_C_LeanDebug_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.IsMatchingTeam
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class AController*                                 LocalController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bMatchingTeam                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HDPlayerCharacterBase_C::IsMatchingTeam(class AController* LocalController, bool* bMatchingTeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.IsMatchingTeam");
		
		ABP_HDPlayerCharacterBase_C_IsMatchingTeam_Params params {};
		params.LocalController = LocalController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bMatchingTeam != nullptr)
			*bMatchingTeam = params.bMatchingTeam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.GetPlayerFactionInfoClass
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		EHDTeam                                            PlayerTeam                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      FactionInfoClass                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDPlayerCharacterBase_C::GetPlayerFactionInfoClass(EHDTeam PlayerTeam, class UClass** FactionInfoClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.GetPlayerFactionInfoClass");
		
		ABP_HDPlayerCharacterBase_C_GetPlayerFactionInfoClass_Params params {};
		params.PlayerTeam = PlayerTeam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FactionInfoClass != nullptr)
			*FactionInfoClass = params.FactionInfoClass;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.ClearHealthRegenTimer
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HDPlayerCharacterBase_C::ClearHealthRegenTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.ClearHealthRegenTimer");
		
		ABP_HDPlayerCharacterBase_C_ClearHealthRegenTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.SetHealthRegenTimerIfInvalid
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewHealth                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDPlayerCharacterBase_C::SetHealthRegenTimerIfInvalid(float NewHealth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.SetHealthRegenTimerIfInvalid");
		
		ABP_HDPlayerCharacterBase_C_SetHealthRegenTimerIfInvalid_Params params {};
		params.NewHealth = NewHealth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.HealthRegenTimerElapsed
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HDPlayerCharacterBase_C::HealthRegenTimerElapsed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.HealthRegenTimerElapsed");
		
		ABP_HDPlayerCharacterBase_C_HealthRegenTimerElapsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.CleanupVOIPTalker
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bDestroyedComp                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HDPlayerCharacterBase_C::CleanupVOIPTalker(bool* bDestroyedComp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.CleanupVOIPTalker");
		
		ABP_HDPlayerCharacterBase_C_CleanupVOIPTalker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bDestroyedComp != nullptr)
			*bDestroyedComp = params.bDestroyedComp;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.SetupVOIPTalker
	 * 		Flags  -> (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HDPlayerCharacterBase_C::SetupVOIPTalker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.SetupVOIPTalker");
		
		ABP_HDPlayerCharacterBase_C_SetupVOIPTalker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.EquipSelectedItemFromInventory
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bSwitchFireModeForSelected                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HDPlayerCharacterBase_C::EquipSelectedItemFromInventory(bool bSwitchFireModeForSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.EquipSelectedItemFromInventory");
		
		ABP_HDPlayerCharacterBase_C_EquipSelectedItemFromInventory_Params params {};
		params.bSwitchFireModeForSelected = bSwitchFireModeForSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.GetMostValidLoadout
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UHDKit*                                      PlayerLoadout                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDPlayerCharacterBase_C::GetMostValidLoadout(class UHDKit** PlayerLoadout)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.GetMostValidLoadout");
		
		ABP_HDPlayerCharacterBase_C_GetMostValidLoadout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayerLoadout != nullptr)
			*PlayerLoadout = params.PlayerLoadout;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.GetMostValidTeamFactionInfo
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UClass*                                      FactionInfoClass                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDPlayerCharacterBase_C::GetMostValidTeamFactionInfo(class UClass** FactionInfoClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.GetMostValidTeamFactionInfo");
		
		ABP_HDPlayerCharacterBase_C_GetMostValidTeamFactionInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FactionInfoClass != nullptr)
			*FactionInfoClass = params.FactionInfoClass;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.GetMostValidTeamState
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class ADFTeamState*                                TeamState                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDPlayerCharacterBase_C::GetMostValidTeamState(class ADFTeamState** TeamState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.GetMostValidTeamState");
		
		ABP_HDPlayerCharacterBase_C_GetMostValidTeamState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TeamState != nullptr)
			*TeamState = params.TeamState;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.GetMostValidPlayerState
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class APlayerState*                                PlayerState                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDPlayerCharacterBase_C::GetMostValidPlayerState(class APlayerState** PlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.GetMostValidPlayerState");
		
		ABP_HDPlayerCharacterBase_C_GetMostValidPlayerState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayerState != nullptr)
			*PlayerState = params.PlayerState;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.ReceiveGetDefaultPawnMesh1P
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	class USkeletalMesh* ABP_HDPlayerCharacterBase_C::ReceiveGetDefaultPawnMesh1P()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.ReceiveGetDefaultPawnMesh1P");
		
		ABP_HDPlayerCharacterBase_C_ReceiveGetDefaultPawnMesh1P_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.UpdateEquipmentItems
	 * 		Flags  -> (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HDPlayerCharacterBase_C::UpdateEquipmentItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.UpdateEquipmentItems");
		
		ABP_HDPlayerCharacterBase_C_UpdateEquipmentItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.UpdatePOIState
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HDPlayerCharacterBase_C::UpdatePOIState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.UpdatePOIState");
		
		ABP_HDPlayerCharacterBase_C_UpdatePOIState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.GetMinimapWidget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class AController*                                 Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDFMinimap*                                  MinimapWidget                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDPlayerCharacterBase_C::GetMinimapWidget(class AController* Controller, class UDFMinimap** MinimapWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.GetMinimapWidget");
		
		ABP_HDPlayerCharacterBase_C_GetMinimapWidget_Params params {};
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MinimapWidget != nullptr)
			*MinimapWidget = params.MinimapWidget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.ApplyCharacterVariation
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FDFCharacterVariationDataHandle             VariationHandle                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               bApplyToFPP                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HDPlayerCharacterBase_C::ApplyCharacterVariation(const struct FDFCharacterVariationDataHandle& VariationHandle, bool bApplyToFPP)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.ApplyCharacterVariation");
		
		ABP_HDPlayerCharacterBase_C_ApplyCharacterVariation_Params params {};
		params.VariationHandle = VariationHandle;
		params.bApplyToFPP = bApplyToFPP;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.UpdateCharMeshes
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USkeletalMesh*                               MeshFPP                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USkeletalMesh*                               MeshTPP                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDPlayerCharacterBase_C::UpdateCharMeshes(class USkeletalMesh* MeshFPP, class USkeletalMesh* MeshTPP)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.UpdateCharMeshes");
		
		ABP_HDPlayerCharacterBase_C_UpdateCharMeshes_Params params {};
		params.MeshFPP = MeshFPP;
		params.MeshTPP = MeshTPP;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.UpdateCharMeshesFromFaction
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HDPlayerCharacterBase_C::UpdateCharMeshesFromFaction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.UpdateCharMeshesFromFaction");
		
		ABP_HDPlayerCharacterBase_C_UpdateCharMeshesFromFaction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.SelectEquipmentBySlotNum
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            EquipSlotNum                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bEquipImmediately                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HDPlayerCharacterBase_C::SelectEquipmentBySlotNum(int32_t EquipSlotNum, bool bEquipImmediately)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.SelectEquipmentBySlotNum");
		
		ABP_HDPlayerCharacterBase_C_SelectEquipmentBySlotNum_Params params {};
		params.EquipSlotNum = EquipSlotNum;
		params.bEquipImmediately = bEquipImmediately;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.SetEquipmentTimer
	 * 		Flags  -> (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HDPlayerCharacterBase_C::SetEquipmentTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.SetEquipmentTimer");
		
		ABP_HDPlayerCharacterBase_C_SetEquipmentTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.StartEquipmentTimer
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HDPlayerCharacterBase_C::StartEquipmentTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.StartEquipmentTimer");
		
		ABP_HDPlayerCharacterBase_C_StartEquipmentTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.FreeAiming
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HDPlayerCharacterBase_C::FreeAiming()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.FreeAiming");
		
		ABP_HDPlayerCharacterBase_C_FreeAiming_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HDPlayerCharacterBase_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.UserConstructionScript");
		
		ABP_HDPlayerCharacterBase_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.SuppressionTimeline__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_HDPlayerCharacterBase_C::SuppressionTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.SuppressionTimeline__FinishedFunc");
		
		ABP_HDPlayerCharacterBase_C_SuppressionTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.SuppressionTimeline__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_HDPlayerCharacterBase_C::SuppressionTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.SuppressionTimeline__UpdateFunc");
		
		ABP_HDPlayerCharacterBase_C_SuppressionTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.DamageEffectTimeline__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_HDPlayerCharacterBase_C::DamageEffectTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.DamageEffectTimeline__FinishedFunc");
		
		ABP_HDPlayerCharacterBase_C_DamageEffectTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.DamageEffectTimeline__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_HDPlayerCharacterBase_C::DamageEffectTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.DamageEffectTimeline__UpdateFunc");
		
		ABP_HDPlayerCharacterBase_C_DamageEffectTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.LerpTimeline__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_HDPlayerCharacterBase_C::LerpTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.LerpTimeline__FinishedFunc");
		
		ABP_HDPlayerCharacterBase_C_LerpTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.LerpTimeline__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_HDPlayerCharacterBase_C::LerpTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.LerpTimeline__UpdateFunc");
		
		ABP_HDPlayerCharacterBase_C_LerpTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.InpActEvt_NextItem_K2Node_InputActionEvent_17
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_HDPlayerCharacterBase_C::InpActEvt_NextItem_K2Node_InputActionEvent_17(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.InpActEvt_NextItem_K2Node_InputActionEvent_17");
		
		ABP_HDPlayerCharacterBase_C_InpActEvt_NextItem_K2Node_InputActionEvent_17_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.InpActEvt_PreviousItem_K2Node_InputActionEvent_16
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_HDPlayerCharacterBase_C::InpActEvt_PreviousItem_K2Node_InputActionEvent_16(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.InpActEvt_PreviousItem_K2Node_InputActionEvent_16");
		
		ABP_HDPlayerCharacterBase_C_InpActEvt_PreviousItem_K2Node_InputActionEvent_16_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.InpActEvt_CameraToggle_K2Node_InputActionEvent_15
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_HDPlayerCharacterBase_C::InpActEvt_CameraToggle_K2Node_InputActionEvent_15(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.InpActEvt_CameraToggle_K2Node_InputActionEvent_15");
		
		ABP_HDPlayerCharacterBase_C_InpActEvt_CameraToggle_K2Node_InputActionEvent_15_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.InpActEvt_EqpSlot0_K2Node_InputActionEvent_14
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_HDPlayerCharacterBase_C::InpActEvt_EqpSlot0_K2Node_InputActionEvent_14(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.InpActEvt_EqpSlot0_K2Node_InputActionEvent_14");
		
		ABP_HDPlayerCharacterBase_C_InpActEvt_EqpSlot0_K2Node_InputActionEvent_14_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.InpActEvt_EqpSlot1_K2Node_InputActionEvent_13
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_HDPlayerCharacterBase_C::InpActEvt_EqpSlot1_K2Node_InputActionEvent_13(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.InpActEvt_EqpSlot1_K2Node_InputActionEvent_13");
		
		ABP_HDPlayerCharacterBase_C_InpActEvt_EqpSlot1_K2Node_InputActionEvent_13_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.InpActEvt_EqpSlot2_K2Node_InputActionEvent_12
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_HDPlayerCharacterBase_C::InpActEvt_EqpSlot2_K2Node_InputActionEvent_12(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.InpActEvt_EqpSlot2_K2Node_InputActionEvent_12");
		
		ABP_HDPlayerCharacterBase_C_InpActEvt_EqpSlot2_K2Node_InputActionEvent_12_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.InpActEvt_EqpSlot3_K2Node_InputActionEvent_11
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_HDPlayerCharacterBase_C::InpActEvt_EqpSlot3_K2Node_InputActionEvent_11(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.InpActEvt_EqpSlot3_K2Node_InputActionEvent_11");
		
		ABP_HDPlayerCharacterBase_C_InpActEvt_EqpSlot3_K2Node_InputActionEvent_11_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.InpActEvt_EqpSlot4_K2Node_InputActionEvent_10
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_HDPlayerCharacterBase_C::InpActEvt_EqpSlot4_K2Node_InputActionEvent_10(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.InpActEvt_EqpSlot4_K2Node_InputActionEvent_10");
		
		ABP_HDPlayerCharacterBase_C_InpActEvt_EqpSlot4_K2Node_InputActionEvent_10_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.InpActEvt_EqpSlot5_K2Node_InputActionEvent_9
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_HDPlayerCharacterBase_C::InpActEvt_EqpSlot5_K2Node_InputActionEvent_9(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.InpActEvt_EqpSlot5_K2Node_InputActionEvent_9");
		
		ABP_HDPlayerCharacterBase_C_InpActEvt_EqpSlot5_K2Node_InputActionEvent_9_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.InpActEvt_EqpSlot6_K2Node_InputActionEvent_8
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_HDPlayerCharacterBase_C::InpActEvt_EqpSlot6_K2Node_InputActionEvent_8(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.InpActEvt_EqpSlot6_K2Node_InputActionEvent_8");
		
		ABP_HDPlayerCharacterBase_C_InpActEvt_EqpSlot6_K2Node_InputActionEvent_8_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.InpActEvt_EqpSlot7_K2Node_InputActionEvent_7
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_HDPlayerCharacterBase_C::InpActEvt_EqpSlot7_K2Node_InputActionEvent_7(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.InpActEvt_EqpSlot7_K2Node_InputActionEvent_7");
		
		ABP_HDPlayerCharacterBase_C_InpActEvt_EqpSlot7_K2Node_InputActionEvent_7_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.InpActEvt_EqpSlot8_K2Node_InputActionEvent_6
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_HDPlayerCharacterBase_C::InpActEvt_EqpSlot8_K2Node_InputActionEvent_6(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.InpActEvt_EqpSlot8_K2Node_InputActionEvent_6");
		
		ABP_HDPlayerCharacterBase_C_InpActEvt_EqpSlot8_K2Node_InputActionEvent_6_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.InpActEvt_EqpSlot9_K2Node_InputActionEvent_5
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_HDPlayerCharacterBase_C::InpActEvt_EqpSlot9_K2Node_InputActionEvent_5(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.InpActEvt_EqpSlot9_K2Node_InputActionEvent_5");
		
		ABP_HDPlayerCharacterBase_C_InpActEvt_EqpSlot9_K2Node_InputActionEvent_5_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.InpActEvt_RadialMenu_K2Node_InputActionEvent_4
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_HDPlayerCharacterBase_C::InpActEvt_RadialMenu_K2Node_InputActionEvent_4(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.InpActEvt_RadialMenu_K2Node_InputActionEvent_4");
		
		ABP_HDPlayerCharacterBase_C_InpActEvt_RadialMenu_K2Node_InputActionEvent_4_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.InpActEvt_RadialMenu_K2Node_InputActionEvent_3
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_HDPlayerCharacterBase_C::InpActEvt_RadialMenu_K2Node_InputActionEvent_3(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.InpActEvt_RadialMenu_K2Node_InputActionEvent_3");
		
		ABP_HDPlayerCharacterBase_C_InpActEvt_RadialMenu_K2Node_InputActionEvent_3_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.InpActEvt_BracedAim_K2Node_InputActionEvent_2
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_HDPlayerCharacterBase_C::InpActEvt_BracedAim_K2Node_InputActionEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.InpActEvt_BracedAim_K2Node_InputActionEvent_2");
		
		ABP_HDPlayerCharacterBase_C_InpActEvt_BracedAim_K2Node_InputActionEvent_2_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.InpActEvt_CycleWeaponSights_K2Node_InputActionEvent_1
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_HDPlayerCharacterBase_C::InpActEvt_CycleWeaponSights_K2Node_InputActionEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.InpActEvt_CycleWeaponSights_K2Node_InputActionEvent_1");
		
		ABP_HDPlayerCharacterBase_C_InpActEvt_CycleWeaponSights_K2Node_InputActionEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.ServerRadialMenuSelectSpot
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HDPlayerCharacterBase_C::ServerRadialMenuSelectSpot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.ServerRadialMenuSelectSpot");
		
		ABP_HDPlayerCharacterBase_C_ServerRadialMenuSelectSpot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.ServerRadialMenuSelectRallypoint
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HDPlayerCharacterBase_C::ServerRadialMenuSelectRallypoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.ServerRadialMenuSelectRallypoint");
		
		ABP_HDPlayerCharacterBase_C_ServerRadialMenuSelectRallypoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.ServerRadialMenuSelectOutpost
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HDPlayerCharacterBase_C::ServerRadialMenuSelectOutpost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.ServerRadialMenuSelectOutpost");
		
		ABP_HDPlayerCharacterBase_C_ServerRadialMenuSelectOutpost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.Hit Damage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADFBaseProjectile*                           OtherProjectile                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ADFBasePickup*                               Pickup                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDPlayerCharacterBase_C::Hit_Damage(class ADFBaseProjectile* OtherProjectile, class ADFBasePickup* Pickup)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.Hit Damage");
		
		ABP_HDPlayerCharacterBase_C_Hit_Damage_Params params {};
		params.OtherProjectile = OtherProjectile;
		params.Pickup = Pickup;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.SuppressionEffect
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADFBaseProjectile*                           OtherProjectile                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ADFBasePickup*                               Pickup                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         SuppressionVolume                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDPlayerCharacterBase_C::SuppressionEffect(class ADFBaseProjectile* OtherProjectile, class ADFBasePickup* Pickup, class UPrimitiveComponent* SuppressionVolume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.SuppressionEffect");
		
		ABP_HDPlayerCharacterBase_C_SuppressionEffect_Params params {};
		params.OtherProjectile = OtherProjectile;
		params.Pickup = Pickup;
		params.SuppressionVolume = SuppressionVolume;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.BndEvt__Suppression_R_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_HDPlayerCharacterBase_C::BndEvt__Suppression_R_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.BndEvt__Suppression_R_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
		
		ABP_HDPlayerCharacterBase_C_BndEvt__Suppression_R_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.BndEvt__Suppression_L_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_HDPlayerCharacterBase_C::BndEvt__Suppression_L_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.BndEvt__Suppression_L_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");
		
		ABP_HDPlayerCharacterBase_C_BndEvt__Suppression_L_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.BndEvt__Suppression_A_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_HDPlayerCharacterBase_C::BndEvt__Suppression_A_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.BndEvt__Suppression_A_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");
		
		ABP_HDPlayerCharacterBase_C_BndEvt__Suppression_A_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.BndEvt__Suppression_B_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_HDPlayerCharacterBase_C::BndEvt__Suppression_B_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.BndEvt__Suppression_B_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature");
		
		ABP_HDPlayerCharacterBase_C_BndEvt__Suppression_B_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.EnterRadialMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HDPlayerCharacterBase_C::EnterRadialMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.EnterRadialMenu");
		
		ABP_HDPlayerCharacterBase_C_EnterRadialMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.EventResetHealthEffect
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HDPlayerCharacterBase_C::EventResetHealthEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.EventResetHealthEffect");
		
		ABP_HDPlayerCharacterBase_C_EventResetHealthEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.GenericDamageFeedback
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HDPlayerCharacterBase_C::GenericDamageFeedback()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.GenericDamageFeedback");
		
		ABP_HDPlayerCharacterBase_C_GenericDamageFeedback_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDPlayerCharacterBase_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.ReceiveTick");
		
		ABP_HDPlayerCharacterBase_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.OnDeath
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		float                                              KillingDamage                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDamageEvent                                DamageEvent                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class APawn*                                       InstigatingPawn                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDPlayerCharacterBase_C::OnDeath(float KillingDamage, const struct FDamageEvent& DamageEvent, class APawn* InstigatingPawn, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.OnDeath");
		
		ABP_HDPlayerCharacterBase_C_OnDeath_Params params {};
		params.KillingDamage = KillingDamage;
		params.DamageEvent = DamageEvent;
		params.InstigatingPawn = InstigatingPawn;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.OnEquipmentTimerElapsed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HDPlayerCharacterBase_C::OnEquipmentTimerElapsed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.OnEquipmentTimerElapsed");
		
		ABP_HDPlayerCharacterBase_C_OnEquipmentTimerElapsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.ReceiveCurrentLoadout
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_HDPlayerCharacterBase_C::ReceiveCurrentLoadout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.ReceiveCurrentLoadout");
		
		ABP_HDPlayerCharacterBase_C_ReceiveCurrentLoadout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.RetryLoadout
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HDPlayerCharacterBase_C::RetryLoadout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.RetryLoadout");
		
		ABP_HDPlayerCharacterBase_C_RetryLoadout_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.ReceivePossessed
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AController*                                 NewController                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDPlayerCharacterBase_C::ReceivePossessed(class AController* NewController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.ReceivePossessed");
		
		ABP_HDPlayerCharacterBase_C_ReceivePossessed_Params params {};
		params.NewController = NewController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.OnPCFirePressed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HDPlayerCharacterBase_C::OnPCFirePressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.OnPCFirePressed");
		
		ABP_HDPlayerCharacterBase_C_OnPCFirePressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.OnLanded
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_HDPlayerCharacterBase_C::OnLanded(const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.OnLanded");
		
		ABP_HDPlayerCharacterBase_C_OnLanded_Params params {};
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.ExitRadialMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HDPlayerCharacterBase_C::ExitRadialMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.ExitRadialMenu");
		
		ABP_HDPlayerCharacterBase_C_ExitRadialMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.ReceiveRestart
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_HDPlayerCharacterBase_C::ReceiveRestart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.ReceiveRestart");
		
		ABP_HDPlayerCharacterBase_C_ReceiveRestart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.ReceiveDestroyed
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_HDPlayerCharacterBase_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.ReceiveDestroyed");
		
		ABP_HDPlayerCharacterBase_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.SubmenuCommited
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        Category                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        SubItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDPlayerCharacterBase_C::SubmenuCommited(const class FName& Category, const class FName& SubItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.SubmenuCommited");
		
		ABP_HDPlayerCharacterBase_C_SubmenuCommited_Params params {};
		params.Category = Category;
		params.SubItem = SubItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.ReceivePawnTeamNumUpdated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		unsigned char                                      LastTeamNum                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      NewTeamNum                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDPlayerCharacterBase_C::ReceivePawnTeamNumUpdated(unsigned char LastTeamNum, unsigned char NewTeamNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.ReceivePawnTeamNumUpdated");
		
		ABP_HDPlayerCharacterBase_C_ReceivePawnTeamNumUpdated_Params params {};
		params.LastTeamNum = LastTeamNum;
		params.NewTeamNum = NewTeamNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.ReceiveFreeAim
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDPlayerCharacterBase_C::ReceiveFreeAim(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.ReceiveFreeAim");
		
		ABP_HDPlayerCharacterBase_C_ReceiveFreeAim_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.NotifyPlayerStateChanged
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerState*                                NewPlayerState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APlayerState*                                OldPlayerState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDPlayerCharacterBase_C::NotifyPlayerStateChanged(class APlayerState* NewPlayerState, class APlayerState* OldPlayerState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.NotifyPlayerStateChanged");
		
		ABP_HDPlayerCharacterBase_C_NotifyPlayerStateChanged_Params params {};
		params.NewPlayerState = NewPlayerState;
		params.OldPlayerState = OldPlayerState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_HDPlayerCharacterBase_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.ReceiveBeginPlay");
		
		ABP_HDPlayerCharacterBase_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.FirstPersonToggled
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bFirstPerson                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HDPlayerCharacterBase_C::FirstPersonToggled(bool bFirstPerson)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.FirstPersonToggled");
		
		ABP_HDPlayerCharacterBase_C_FirstPersonToggled_Params params {};
		params.bFirstPerson = bFirstPerson;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.OnPCFireReleased
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HDPlayerCharacterBase_C::OnPCFireReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.OnPCFireReleased");
		
		ABP_HDPlayerCharacterBase_C_OnPCFireReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.PlayerNameChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerState*                                PS                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      NewPlayerName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_HDPlayerCharacterBase_C::PlayerNameChanged(class APlayerState* PS, const class FString& NewPlayerName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.PlayerNameChanged");
		
		ABP_HDPlayerCharacterBase_C_PlayerNameChanged_Params params {};
		params.PS = PS;
		params.NewPlayerName = NewPlayerName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDPlayerCharacterBase_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.ReceiveEndPlay");
		
		ABP_HDPlayerCharacterBase_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.ReceiveUnpossessed
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AController*                                 OldController                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDPlayerCharacterBase_C::ReceiveUnpossessed(class AController* OldController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.ReceiveUnpossessed");
		
		ABP_HDPlayerCharacterBase_C_ReceiveUnpossessed_Params params {};
		params.OldController = OldController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.ReceiveAnyDamage
	 * 		Flags  -> (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageType*                                 DamageType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AController*                                 InstigatedBy                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDPlayerCharacterBase_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.ReceiveAnyDamage");
		
		ABP_HDPlayerCharacterBase_C_ReceiveAnyDamage_Params params {};
		params.Damage = Damage;
		params.DamageType = DamageType;
		params.InstigatedBy = InstigatedBy;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.ReceivePawnTeamStateUpdated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADFTeamState*                                TeamStateBeforeUpdate                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ADFTeamState*                                NewTeamState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bNewTeamStateInit                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HDPlayerCharacterBase_C::ReceivePawnTeamStateUpdated(class ADFTeamState* TeamStateBeforeUpdate, class ADFTeamState* NewTeamState, bool bNewTeamStateInit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.ReceivePawnTeamStateUpdated");
		
		ABP_HDPlayerCharacterBase_C_ReceivePawnTeamStateUpdated_Params params {};
		params.TeamStateBeforeUpdate = TeamStateBeforeUpdate;
		params.NewTeamState = NewTeamState;
		params.bNewTeamStateInit = bNewTeamStateInit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.K2_OnMovementModeChanged
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EMovementMode                                      PrevMovementMode                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EMovementMode                                      NewMovementMode                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      PrevCustomMode                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      NewCustomMode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDPlayerCharacterBase_C::K2_OnMovementModeChanged(EMovementMode PrevMovementMode, EMovementMode NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.K2_OnMovementModeChanged");
		
		ABP_HDPlayerCharacterBase_C_K2_OnMovementModeChanged_Params params {};
		params.PrevMovementMode = PrevMovementMode;
		params.NewMovementMode = NewMovementMode;
		params.PrevCustomMode = PrevCustomMode;
		params.NewCustomMode = NewCustomMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.ReceiveVoipTalkerMsgReceived
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UDFCommChannel*                              MsgTalkerChannel                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APlayerState*                                MsgTalkerPS                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bMsgIsTalking                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HDPlayerCharacterBase_C::ReceiveVoipTalkerMsgReceived(class UDFCommChannel* MsgTalkerChannel, class APlayerState* MsgTalkerPS, bool bMsgIsTalking)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.ReceiveVoipTalkerMsgReceived");
		
		ABP_HDPlayerCharacterBase_C_ReceiveVoipTalkerMsgReceived_Params params {};
		params.MsgTalkerChannel = MsgTalkerChannel;
		params.MsgTalkerPS = MsgTalkerPS;
		params.bMsgIsTalking = bMsgIsTalking;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.ReceiveOnStartAim
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_HDPlayerCharacterBase_C::ReceiveOnStartAim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.ReceiveOnStartAim");
		
		ABP_HDPlayerCharacterBase_C_ReceiveOnStartAim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.ReceiveOnEndAim
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_HDPlayerCharacterBase_C::ReceiveOnEndAim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.ReceiveOnEndAim");
		
		ABP_HDPlayerCharacterBase_C_ReceiveOnEndAim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.ReceiveEquippedItemChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADFBaseItem*                                 NewEquippedItem                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ADFBaseItem*                                 PrevEquippedItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDPlayerCharacterBase_C::ReceiveEquippedItemChanged(class ADFBaseItem* NewEquippedItem, class ADFBaseItem* PrevEquippedItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.ReceiveEquippedItemChanged");
		
		ABP_HDPlayerCharacterBase_C_ReceiveEquippedItemChanged_Params params {};
		params.NewEquippedItem = NewEquippedItem;
		params.PrevEquippedItem = PrevEquippedItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.ReceivePlayHit
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DamageTaken                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FDamageEvent                                DamageEvent                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class APawn*                                       PawnInstigator                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDPlayerCharacterBase_C::ReceivePlayHit(float DamageTaken, const struct FDamageEvent& DamageEvent, class APawn* PawnInstigator, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.ReceivePlayHit");
		
		ABP_HDPlayerCharacterBase_C_ReceivePlayHit_Params params {};
		params.DamageTaken = DamageTaken;
		params.DamageEvent = DamageEvent;
		params.PawnInstigator = PawnInstigator;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.ReceiveVariationDataChanged
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FDFCharacterVariationData                   NewVariation                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		struct FDFCharacterVariationData                   PreviousVariation                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABP_HDPlayerCharacterBase_C::ReceiveVariationDataChanged(const struct FDFCharacterVariationData& NewVariation, const struct FDFCharacterVariationData& PreviousVariation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.ReceiveVariationDataChanged");
		
		ABP_HDPlayerCharacterBase_C_ReceiveVariationDataChanged_Params params {};
		params.NewVariation = NewVariation;
		params.PreviousVariation = PreviousVariation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.ExecuteUbergraph_BP_HDPlayerCharacterBase
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDPlayerCharacterBase_C::ExecuteUbergraph_BP_HDPlayerCharacterBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.ExecuteUbergraph_BP_HDPlayerCharacterBase");
		
		ABP_HDPlayerCharacterBase_C_ExecuteUbergraph_BP_HDPlayerCharacterBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.OnHitDamage__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADFBaseProjectile*                           OtherProjectile                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ADFBasePickup*                               Pickup                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDPlayerCharacterBase_C::OnHitDamage__DelegateSignature(class ADFBaseProjectile* OtherProjectile, class ADFBasePickup* Pickup)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.OnHitDamage__DelegateSignature");
		
		ABP_HDPlayerCharacterBase_C_OnHitDamage__DelegateSignature_Params params {};
		params.OtherProjectile = OtherProjectile;
		params.Pickup = Pickup;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.OnSuppression__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADFBaseProjectile*                           OtherProjectile                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ADFBasePickup*                               Pickup                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDPlayerCharacterBase_C::OnSuppression__DelegateSignature(class ADFBaseProjectile* OtherProjectile, class ADFBasePickup* Pickup)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C.OnSuppression__DelegateSignature");
		
		ABP_HDPlayerCharacterBase_C_OnSuppression__DelegateSignature_Params params {};
		params.OtherProjectile = OtherProjectile;
		params.Pickup = Pickup;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_HDPlayerCharacterBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_HDPlayerCharacterBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_HDPlayerCharacterBase.BP_HDPlayerCharacterBase_C");
		return ptr;
	}

}


