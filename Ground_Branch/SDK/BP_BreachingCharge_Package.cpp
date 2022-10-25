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
	 * 		Name   -> Function BP_BreachingCharge.BP_BreachingCharge_C.AIQuestion
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AController*                                 Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        UseType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FName ABP_BreachingCharge_C::AIQuestion(class AController* Controller, const class FName& UseType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BreachingCharge.BP_BreachingCharge_C.AIQuestion");
		
		ABP_BreachingCharge_C_AIQuestion_Params params {};
		params.Controller = Controller;
		params.UseType = UseType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BreachingCharge.BP_BreachingCharge_C.AIQuestionWithParams
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AController*                                 Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        UseType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Params                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	class FName ABP_BreachingCharge_C::AIQuestionWithParams(class AController* Controller, const class FName& UseType, const class FString& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BreachingCharge.BP_BreachingCharge_C.AIQuestionWithParams");
		
		ABP_BreachingCharge_C_AIQuestionWithParams_Params params {};
		params.Controller = Controller;
		params.UseType = UseType;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BreachingCharge.BP_BreachingCharge_C.GetEquipInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EHand                                              TargetHand                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FGBSwitchItemInfo                           OutEquipInfo                                               (Parm, OutParm, ContainsInstancedReference)
	 */
	bool ABP_BreachingCharge_C::GetEquipInfo(EHand TargetHand, struct FGBSwitchItemInfo* OutEquipInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BreachingCharge.BP_BreachingCharge_C.GetEquipInfo");
		
		ABP_BreachingCharge_C_GetEquipInfo_Params params {};
		params.TargetHand = TargetHand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutEquipInfo != nullptr)
			*OutEquipInfo = params.OutEquipInfo;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BreachingCharge.BP_BreachingCharge_C.DamageCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGBCharacter*                                InGBCharacter                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BreachingCharge_C::DamageCharacter(class AGBCharacter* InGBCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BreachingCharge.BP_BreachingCharge_C.DamageCharacter");
		
		ABP_BreachingCharge_C_DamageCharacter_Params params {};
		params.InGBCharacter = InGBCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BreachingCharge.BP_BreachingCharge_C.DecodeKit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVaRestJsonObject*                           ItemAsJson                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DecodedOwner                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AGBItem*                                     DecodedParentItem                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ABP_BreachingCharge_C::DecodeKit(class UVaRestJsonObject* ItemAsJson, class AActor* DecodedOwner, class AGBItem* DecodedParentItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BreachingCharge.BP_BreachingCharge_C.DecodeKit");
		
		ABP_BreachingCharge_C_DecodeKit_Params params {};
		params.ItemAsJson = ItemAsJson;
		params.DecodedOwner = DecodedOwner;
		params.DecodedParentItem = DecodedParentItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BreachingCharge.BP_BreachingCharge_C.OnRep_bCanBeArmed
	 * 		Flags  -> ()
	 */
	void ABP_BreachingCharge_C::OnRep_bCanBeArmed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BreachingCharge.BP_BreachingCharge_C.OnRep_bCanBeArmed");
		
		ABP_BreachingCharge_C_OnRep_bCanBeArmed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BreachingCharge.BP_BreachingCharge_C.K2_OnReset
	 * 		Flags  -> ()
	 */
	void ABP_BreachingCharge_C::K2_OnReset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BreachingCharge.BP_BreachingCharge_C.K2_OnReset");
		
		ABP_BreachingCharge_C_K2_OnReset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BreachingCharge.BP_BreachingCharge_C.UseMainHandPressed
	 * 		Flags  -> ()
	 */
	void ABP_BreachingCharge_C::UseMainHandPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BreachingCharge.BP_BreachingCharge_C.UseMainHandPressed");
		
		ABP_BreachingCharge_C_UseMainHandPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BreachingCharge.BP_BreachingCharge_C.ServerAttach
	 * 		Flags  -> ()
	 */
	void ABP_BreachingCharge_C::ServerAttach()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BreachingCharge.BP_BreachingCharge_C.ServerAttach");
		
		ABP_BreachingCharge_C_ServerAttach_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BreachingCharge.BP_BreachingCharge_C.MulticastSetCanBeArmed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bCanBe                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_BreachingCharge_C::MulticastSetCanBeArmed(bool bCanBe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BreachingCharge.BP_BreachingCharge_C.MulticastSetCanBeArmed");
		
		ABP_BreachingCharge_C_MulticastSetCanBeArmed_Params params {};
		params.bCanBe = bCanBe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BreachingCharge.BP_BreachingCharge_C.BndEvt__BreachinCharge0_K2Node_ComponentBoundEvent_0_ComponentBeginCursorOverSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         TouchedComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BreachingCharge_C::BndEvt__BreachinCharge0_K2Node_ComponentBoundEvent_0_ComponentBeginCursorOverSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BreachingCharge.BP_BreachingCharge_C.BndEvt__BreachinCharge0_K2Node_ComponentBoundEvent_0_ComponentBeginCursorOverSignature__DelegateSignature");
		
		ABP_BreachingCharge_C_BndEvt__BreachinCharge0_K2Node_ComponentBoundEvent_0_ComponentBeginCursorOverSignature__DelegateSignature_Params params {};
		params.TouchedComponent = TouchedComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BreachingCharge.BP_BreachingCharge_C.BndEvt__BreachinCharge0_K2Node_ComponentBoundEvent_1_ComponentEndCursorOverSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         TouchedComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BreachingCharge_C::BndEvt__BreachinCharge0_K2Node_ComponentBoundEvent_1_ComponentEndCursorOverSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BreachingCharge.BP_BreachingCharge_C.BndEvt__BreachinCharge0_K2Node_ComponentBoundEvent_1_ComponentEndCursorOverSignature__DelegateSignature");
		
		ABP_BreachingCharge_C_BndEvt__BreachinCharge0_K2Node_ComponentBoundEvent_1_ComponentEndCursorOverSignature__DelegateSignature_Params params {};
		params.TouchedComponent = TouchedComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BreachingCharge.BP_BreachingCharge_C.SpawnFX
	 * 		Flags  -> ()
	 */
	void ABP_BreachingCharge_C::SpawnFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BreachingCharge.BP_BreachingCharge_C.SpawnFX");
		
		ABP_BreachingCharge_C_SpawnFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BreachingCharge.BP_BreachingCharge_C.MakeInteractive
	 * 		Flags  -> ()
	 */
	void ABP_BreachingCharge_C::MakeInteractive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BreachingCharge.BP_BreachingCharge_C.MakeInteractive");
		
		ABP_BreachingCharge_C_MakeInteractive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BreachingCharge.BP_BreachingCharge_C.ServerUseWithParams
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AController*                                 Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        UseType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Params                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_BreachingCharge_C::ServerUseWithParams(class AController* Controller, const class FName& UseType, const class FString& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BreachingCharge.BP_BreachingCharge_C.ServerUseWithParams");
		
		ABP_BreachingCharge_C_ServerUseWithParams_Params params {};
		params.Controller = Controller;
		params.UseType = UseType;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BreachingCharge.BP_BreachingCharge_C.ClientUseWithParams
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AController*                                 Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        UseType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Params                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_BreachingCharge_C::ClientUseWithParams(class AController* Controller, const class FName& UseType, const class FString& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BreachingCharge.BP_BreachingCharge_C.ClientUseWithParams");
		
		ABP_BreachingCharge_C_ClientUseWithParams_Params params {};
		params.Controller = Controller;
		params.UseType = UseType;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BreachingCharge.BP_BreachingCharge_C.ClientUse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AController*                                 Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        UseType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BreachingCharge_C::ClientUse(class AController* Controller, const class FName& UseType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BreachingCharge.BP_BreachingCharge_C.ClientUse");
		
		ABP_BreachingCharge_C_ClientUse_Params params {};
		params.Controller = Controller;
		params.UseType = UseType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BreachingCharge.BP_BreachingCharge_C.Detonate
	 * 		Flags  -> ()
	 */
	void ABP_BreachingCharge_C::Detonate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BreachingCharge.BP_BreachingCharge_C.Detonate");
		
		ABP_BreachingCharge_C_Detonate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BreachingCharge.BP_BreachingCharge_C.DisableInteraction
	 * 		Flags  -> ()
	 */
	void ABP_BreachingCharge_C::DisableInteraction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BreachingCharge.BP_BreachingCharge_C.DisableInteraction");
		
		ABP_BreachingCharge_C_DisableInteraction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BreachingCharge.BP_BreachingCharge_C.ServerUse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AController*                                 Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        UseType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BreachingCharge_C::ServerUse(class AController* Controller, const class FName& UseType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BreachingCharge.BP_BreachingCharge_C.ServerUse");
		
		ABP_BreachingCharge_C_ServerUse_Params params {};
		params.Controller = Controller;
		params.UseType = UseType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BreachingCharge.BP_BreachingCharge_C.InputArm
	 * 		Flags  -> ()
	 */
	void ABP_BreachingCharge_C::InputArm()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BreachingCharge.BP_BreachingCharge_C.InputArm");
		
		ABP_BreachingCharge_C_InputArm_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BreachingCharge.BP_BreachingCharge_C.AIUseWithParams
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AController*                                 Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        UseType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Params                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_BreachingCharge_C::AIUseWithParams(class AController* Controller, const class FName& UseType, const class FString& Params)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BreachingCharge.BP_BreachingCharge_C.AIUseWithParams");
		
		ABP_BreachingCharge_C_AIUseWithParams_Params params {};
		params.Controller = Controller;
		params.UseType = UseType;
		params.Params = Params;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BreachingCharge.BP_BreachingCharge_C.AIUse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AController*                                 Controller                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        UseType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BreachingCharge_C::AIUse(class AController* Controller, const class FName& UseType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BreachingCharge.BP_BreachingCharge_C.AIUse");
		
		ABP_BreachingCharge_C_AIUse_Params params {};
		params.Controller = Controller;
		params.UseType = UseType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BreachingCharge.BP_BreachingCharge_C.OnDetonatorUse_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_Detonator_C*                             Detonator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BreachingCharge_C::OnDetonatorUse_Event_1(class ABP_Detonator_C* Detonator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BreachingCharge.BP_BreachingCharge_C.OnDetonatorUse_Event_1");
		
		ABP_BreachingCharge_C_OnDetonatorUse_Event_1_Params params {};
		params.Detonator = Detonator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BreachingCharge.BP_BreachingCharge_C.OnBeingEquipped
	 * 		Flags  -> ()
	 */
	void ABP_BreachingCharge_C::OnBeingEquipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BreachingCharge.BP_BreachingCharge_C.OnBeingEquipped");
		
		ABP_BreachingCharge_C_OnBeingEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BreachingCharge.BP_BreachingCharge_C.OnBeingUnequipped
	 * 		Flags  -> ()
	 */
	void ABP_BreachingCharge_C::OnBeingUnequipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BreachingCharge.BP_BreachingCharge_C.OnBeingUnequipped");
		
		ABP_BreachingCharge_C_OnBeingUnequipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BreachingCharge.BP_BreachingCharge_C.ExecuteUbergraph_BP_BreachingCharge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BreachingCharge_C::ExecuteUbergraph_BP_BreachingCharge(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BreachingCharge.BP_BreachingCharge_C.ExecuteUbergraph_BP_BreachingCharge");
		
		ABP_BreachingCharge_C_ExecuteUbergraph_BP_BreachingCharge_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_BreachingCharge_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_BreachingCharge_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_BreachingCharge.BP_BreachingCharge_C");
		return ptr;
	}

}


