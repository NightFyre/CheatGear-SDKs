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
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Drone_VDayHeart_Ghost.Proj_Drone_VDayHeart_Ghost_C.ReturnGhostSpawnTransform
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               SpawnSide                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FTransform                                  SpawnTransform                                             (Parm, OutParm, IsPlainOldData, NoDestructor)
	 */
	void AProj_Drone_VDayHeart_Ghost_C::ReturnGhostSpawnTransform(bool SpawnSide, struct FTransform* SpawnTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Drone_VDayHeart_Ghost.Proj_Drone_VDayHeart_Ghost_C.ReturnGhostSpawnTransform");
		
		AProj_Drone_VDayHeart_Ghost_C_ReturnGhostSpawnTransform_Params params {};
		params.SpawnSide = SpawnSide;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SpawnTransform != nullptr)
			*SpawnTransform = params.SpawnTransform;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Drone_VDayHeart_Ghost.Proj_Drone_VDayHeart_Ghost_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProj_Drone_VDayHeart_Ghost_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Drone_VDayHeart_Ghost.Proj_Drone_VDayHeart_Ghost_C.UserConstructionScript");
		
		AProj_Drone_VDayHeart_Ghost_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Drone_VDayHeart_Ghost.Proj_Drone_VDayHeart_Ghost_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_1_DamageCompHealthDepletedDelegate__DelegateSignature_Proj_Drone_VDayHeart_Fire
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UDamageComponent*                            DamageReceiver                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageCauserComponent*                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProj_Drone_VDayHeart_Ghost_C::BndEvt__OakDamage_K2Node_ComponentBoundEvent_1_DamageCompHealthDepletedDelegate__DelegateSignature_Proj_Drone_VDayHeart_Fire(class UDamageComponent* DamageReceiver, class UDamageCauserComponent* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Drone_VDayHeart_Ghost.Proj_Drone_VDayHeart_Ghost_C.BndEvt__OakDamage_K2Node_ComponentBoundEvent_1_DamageCompHealthDepletedDelegate__DelegateSignature_Proj_Drone_VDayHeart_Fire");
		
		AProj_Drone_VDayHeart_Ghost_C_BndEvt__OakDamage_K2Node_ComponentBoundEvent_1_DamageCompHealthDepletedDelegate__DelegateSignature_Proj_Drone_VDayHeart_Fire_Params params {};
		params.DamageReceiver = DamageReceiver;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Drone_VDayHeart_Ghost.Proj_Drone_VDayHeart_Ghost_C.ExecuteUbergraph_Proj_Drone_VDayHeart_Ghost
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProj_Drone_VDayHeart_Ghost_C::ExecuteUbergraph_Proj_Drone_VDayHeart_Ghost(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Drone_VDayHeart_Ghost.Proj_Drone_VDayHeart_Ghost_C.ExecuteUbergraph_Proj_Drone_VDayHeart_Ghost");
		
		AProj_Drone_VDayHeart_Ghost_C_ExecuteUbergraph_Proj_Drone_VDayHeart_Ghost_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProj_Drone_VDayHeart_Ghost_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProj_Drone_VDayHeart_Ghost_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Proj_Drone_VDayHeart_Ghost.Proj_Drone_VDayHeart_Ghost_C");
		return ptr;
	}

}


