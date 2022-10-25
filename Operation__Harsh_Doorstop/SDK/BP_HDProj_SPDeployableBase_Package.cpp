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
	 * 		Name   -> Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.GetSpawnPointCollisionHandlingOverrideBP
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		struct FSpawnPointDef                              SpawnPoint                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		ESpawnActorCollisionHandlingMethod                 OutSpawnCollisionMethod                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ABP_HDProj_SPDeployableBase_C::GetSpawnPointCollisionHandlingOverrideBP(const struct FSpawnPointDef& SpawnPoint, ESpawnActorCollisionHandlingMethod* OutSpawnCollisionMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.GetSpawnPointCollisionHandlingOverrideBP");
		
		ABP_HDProj_SPDeployableBase_C_GetSpawnPointCollisionHandlingOverrideBP_Params params {};
		params.SpawnPoint = SpawnPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutSpawnCollisionMethod != nullptr)
			*OutSpawnCollisionMethod = params.OutSpawnCollisionMethod;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.CanRestartPlayerFromSpawnPointBP
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		struct FSpawnPointDef                              SpawnPoint                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		class AController*                                 Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      PlayerPawnClass                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	bool ABP_HDProj_SPDeployableBase_C::CanRestartPlayerFromSpawnPointBP(const struct FSpawnPointDef& SpawnPoint, class AController* Player, class UClass* PlayerPawnClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.CanRestartPlayerFromSpawnPointBP");
		
		ABP_HDProj_SPDeployableBase_C_CanRestartPlayerFromSpawnPointBP_Params params {};
		params.SpawnPoint = SpawnPoint;
		params.Player = Player;
		params.PlayerPawnClass = PlayerPawnClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.CanSpawnActorFromSpawnPointBP
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		struct FSpawnPointDef                              SpawnPoint                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		class UClass*                                      SpawnActorClass                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	bool ABP_HDProj_SPDeployableBase_C::CanSpawnActorFromSpawnPointBP(const struct FSpawnPointDef& SpawnPoint, class UClass* SpawnActorClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.CanSpawnActorFromSpawnPointBP");
		
		ABP_HDProj_SPDeployableBase_C_CanSpawnActorFromSpawnPointBP_Params params {};
		params.SpawnPoint = SpawnPoint;
		params.SpawnActorClass = SpawnActorClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.FindSpawnPointBP
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		int32_t                                            SpawnPointID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSpawnPointDef                              FoundSpawnPoint                                            (Parm, OutParm, NoDestructor)
	 */
	bool ABP_HDProj_SPDeployableBase_C::FindSpawnPointBP(int32_t SpawnPointID, struct FSpawnPointDef* FoundSpawnPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.FindSpawnPointBP");
		
		ABP_HDProj_SPDeployableBase_C_FindSpawnPointBP_Params params {};
		params.SpawnPointID = SpawnPointID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FoundSpawnPoint != nullptr)
			*FoundSpawnPoint = params.FoundSpawnPoint;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.GetAllSpawnPointsBP
	 * 		Flags  -> (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		TArray<struct FSpawnPointDef>                      SpawnPoints                                                (Parm, OutParm, HasGetValueTypeHash)
	 */
	int32_t ABP_HDProj_SPDeployableBase_C::GetAllSpawnPointsBP(TArray<struct FSpawnPointDef>* SpawnPoints)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.GetAllSpawnPointsBP");
		
		ABP_HDProj_SPDeployableBase_C_GetAllSpawnPointsBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SpawnPoints != nullptr)
			*SpawnPoints = params.SpawnPoints;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.CanPlayerSpawnHere
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class AController*                                 InPlayer                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bPlayerCanSpawn                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HDProj_SPDeployableBase_C::CanPlayerSpawnHere(class AController* InPlayer, bool* bPlayerCanSpawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.CanPlayerSpawnHere");
		
		ABP_HDProj_SPDeployableBase_C_CanPlayerSpawnHere_Params params {};
		params.InPlayer = InPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bPlayerCanSpawn != nullptr)
			*bPlayerCanSpawn = params.bPlayerCanSpawn;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.InitDeployable
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HDProj_SPDeployableBase_C::InitDeployable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.InitDeployable");
		
		ABP_HDProj_SPDeployableBase_C_InitDeployable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.CheckEnemyOverrun
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HDProj_SPDeployableBase_C::CheckEnemyOverrun()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.CheckEnemyOverrun");
		
		ABP_HDProj_SPDeployableBase_C_CheckEnemyOverrun_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.HandleTakeDamageFromProjectile
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADFBaseProjectile*                           InProjectile                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InDamage                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDProj_SPDeployableBase_C::HandleTakeDamageFromProjectile(class ADFBaseProjectile* InProjectile, float InDamage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.HandleTakeDamageFromProjectile");
		
		ABP_HDProj_SPDeployableBase_C_HandleTakeDamageFromProjectile_Params params {};
		params.InProjectile = InProjectile;
		params.InDamage = InDamage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.GenerateSpawnPointList
	 * 		Flags  -> (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HDProj_SPDeployableBase_C::GenerateSpawnPointList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.GenerateSpawnPointList");
		
		ABP_HDProj_SPDeployableBase_C_GenerateSpawnPointList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.GetTransformOffsetBySpawnIndex
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            SpawnIdx                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FTransform                                  Transform                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FTransform                                  NewTransform                                               (Parm, OutParm, IsPlainOldData, NoDestructor)
	 */
	void ABP_HDProj_SPDeployableBase_C::GetTransformOffsetBySpawnIndex(int32_t* SpawnIdx, const struct FTransform& Transform, struct FTransform* NewTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.GetTransformOffsetBySpawnIndex");
		
		ABP_HDProj_SPDeployableBase_C_GetTransformOffsetBySpawnIndex_Params params {};
		params.Transform = Transform;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SpawnIdx != nullptr)
			*SpawnIdx = params.SpawnIdx;
		if (NewTransform != nullptr)
			*NewTransform = params.NewTransform;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.GetActorTransformOffsetByMeshZBounds
	 * 		Flags  -> (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FTransform                                  OffsetActorWorldXForm                                      (Parm, OutParm, IsPlainOldData, NoDestructor)
	 */
	void ABP_HDProj_SPDeployableBase_C::GetActorTransformOffsetByMeshZBounds(struct FTransform* OffsetActorWorldXForm)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.GetActorTransformOffsetByMeshZBounds");
		
		ABP_HDProj_SPDeployableBase_C_GetActorTransformOffsetByMeshZBounds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OffsetActorWorldXForm != nullptr)
			*OffsetActorWorldXForm = params.OffsetActorWorldXForm;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.CheckForEnemyChars
	 * 		Flags  -> (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_HDProj_SPDeployableBase_C::CheckForEnemyChars()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.CheckForEnemyChars");
		
		ABP_HDProj_SPDeployableBase_C_CheckForEnemyChars_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.SetIsSpawnable
	 * 		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bNewEnabled                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HDProj_SPDeployableBase_C::SetIsSpawnable(bool bNewEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.SetIsSpawnable");
		
		ABP_HDProj_SPDeployableBase_C_SetIsSpawnable_Params params {};
		params.bNewEnabled = bNewEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.IsSpawnable
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bSpawnPointEnabled                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HDProj_SPDeployableBase_C::IsSpawnable(bool* bSpawnPointEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.IsSpawnable");
		
		ABP_HDProj_SPDeployableBase_C_IsSpawnable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bSpawnPointEnabled != nullptr)
			*bSpawnPointEnabled = params.bSpawnPointEnabled;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.AreSpawnPointsEqual
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FSpawnPointDef                              SpawnPointOne                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		struct FSpawnPointDef                              SpawnPointTwo                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 * 		bool                                               bEqual                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HDProj_SPDeployableBase_C::AreSpawnPointsEqual(struct FSpawnPointDef* SpawnPointOne, struct FSpawnPointDef* SpawnPointTwo, bool* bEqual)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.AreSpawnPointsEqual");
		
		ABP_HDProj_SPDeployableBase_C_AreSpawnPointsEqual_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SpawnPointOne != nullptr)
			*SpawnPointOne = params.SpawnPointOne;
		if (SpawnPointTwo != nullptr)
			*SpawnPointTwo = params.SpawnPointTwo;
		if (bEqual != nullptr)
			*bEqual = params.bEqual;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.GetSpawnPoint
	 * 		Flags  -> (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		bool                                               bMeshZOffset                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            SpawnPointIdx                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSpawnPointDef                              SpawnPoint                                                 (Parm, OutParm, NoDestructor)
	 */
	void ABP_HDProj_SPDeployableBase_C::GetSpawnPoint(bool bMeshZOffset, int32_t SpawnPointIdx, struct FSpawnPointDef* SpawnPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.GetSpawnPoint");
		
		ABP_HDProj_SPDeployableBase_C_GetSpawnPoint_Params params {};
		params.bMeshZOffset = bMeshZOffset;
		params.SpawnPointIdx = SpawnPointIdx;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SpawnPoint != nullptr)
			*SpawnPoint = params.SpawnPoint;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.IsEnemyChar
	 * 		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class ADFBaseCharacter*                            Char                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bEnemyChar                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HDProj_SPDeployableBase_C::IsEnemyChar(class ADFBaseCharacter* Char, bool* bEnemyChar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.IsEnemyChar");
		
		ABP_HDProj_SPDeployableBase_C_IsEnemyChar_Params params {};
		params.Char = Char;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bEnemyChar != nullptr)
			*bEnemyChar = params.bEnemyChar;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.HasServerAuthority
	 * 		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bAuthority                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HDProj_SPDeployableBase_C::HasServerAuthority(bool* bAuthority)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.HasServerAuthority");
		
		ABP_HDProj_SPDeployableBase_C_HasServerAuthority_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bAuthority != nullptr)
			*bAuthority = params.bAuthority;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.ReceivePayloadActivated
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  ImpactHitResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_HDProj_SPDeployableBase_C::ReceivePayloadActivated(const struct FHitResult& ImpactHitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.ReceivePayloadActivated");
		
		ABP_HDProj_SPDeployableBase_C_ReceivePayloadActivated_Params params {};
		params.ImpactHitResult = ImpactHitResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.BndEvt__SpawnSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_HDProj_SPDeployableBase_C::BndEvt__SpawnSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.BndEvt__SpawnSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
		
		ABP_HDProj_SPDeployableBase_C_BndEvt__SpawnSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
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
	 * 		Name   -> Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.BndEvt__SpawnSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDProj_SPDeployableBase_C::BndEvt__SpawnSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.BndEvt__SpawnSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");
		
		ABP_HDProj_SPDeployableBase_C_BndEvt__SpawnSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.OverlappingPawnTeamNumUpdated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		unsigned char                                      LastTeamNum                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      NewTeamNum                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDProj_SPDeployableBase_C::OverlappingPawnTeamNumUpdated(unsigned char LastTeamNum, unsigned char NewTeamNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.OverlappingPawnTeamNumUpdated");
		
		ABP_HDProj_SPDeployableBase_C_OverlappingPawnTeamNumUpdated_Params params {};
		params.LastTeamNum = LastTeamNum;
		params.NewTeamNum = NewTeamNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.ReceiveAnyDamage
	 * 		Flags  -> (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageType*                                 DamageType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AController*                                 InstigatedBy                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDProj_SPDeployableBase_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.ReceiveAnyDamage");
		
		ABP_HDProj_SPDeployableBase_C_ReceiveAnyDamage_Params params {};
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
	 * 		Name   -> Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.MemberPreUnregisteredFromOwnerSquad
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AHDSquadState*                               Squad                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AHDPlayerState*                              MemberPS                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDProj_SPDeployableBase_C::MemberPreUnregisteredFromOwnerSquad(class AHDSquadState* Squad, class AHDPlayerState* MemberPS)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.MemberPreUnregisteredFromOwnerSquad");
		
		ABP_HDProj_SPDeployableBase_C_MemberPreUnregisteredFromOwnerSquad_Params params {};
		params.Squad = Squad;
		params.MemberPS = MemberPS;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.ExecuteUbergraph_BP_HDProj_SPDeployableBase
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HDProj_SPDeployableBase_C::ExecuteUbergraph_BP_HDProj_SPDeployableBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.ExecuteUbergraph_BP_HDProj_SPDeployableBase");
		
		ABP_HDProj_SPDeployableBase_C_ExecuteUbergraph_BP_HDProj_SPDeployableBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.OnSpawnPointActivationChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABP_HDProj_SPDeployableBase_C*               Deployable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bSpawnPointEnabled                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_HDProj_SPDeployableBase_C::OnSpawnPointActivationChanged__DelegateSignature(class ABP_HDProj_SPDeployableBase_C* Deployable, bool bSpawnPointEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C.OnSpawnPointActivationChanged__DelegateSignature");
		
		ABP_HDProj_SPDeployableBase_C_OnSpawnPointActivationChanged__DelegateSignature_Params params {};
		params.Deployable = Deployable;
		params.bSpawnPointEnabled = bSpawnPointEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_HDProj_SPDeployableBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_HDProj_SPDeployableBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_HDProj_SPDeployableBase.BP_HDProj_SPDeployableBase_C");
		return ptr;
	}

}


