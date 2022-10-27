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
	 * 		Name   -> Function BP_Character_AnimFunctionLibrary.BP_Character_AnimFunctionLibrary_C.SetLocalWeaponSequenceArray_Generic
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FAStruct_Generic_WeaponAnimContainer        AStruct_WeaponAnimContainer_Menu                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		TArray<class FName>                                LiveWeaponPoses                                            (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		int32_t                                            WeaponManufacturer                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            WeaponType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            GripType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ForeGripType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Debug_Pose_Array                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Character_AnimFunctionLibrary_C::STATIC_SetLocalWeaponSequenceArray_Generic(const struct FAStruct_Generic_WeaponAnimContainer& AStruct_WeaponAnimContainer_Menu, TArray<class FName>* LiveWeaponPoses, int32_t WeaponManufacturer, int32_t WeaponType, int32_t GripType, int32_t ForeGripType, bool Debug_Pose_Array, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character_AnimFunctionLibrary.BP_Character_AnimFunctionLibrary_C.SetLocalWeaponSequenceArray_Generic");
		
		UBP_Character_AnimFunctionLibrary_C_SetLocalWeaponSequenceArray_Generic_Params params {};
		params.AStruct_WeaponAnimContainer_Menu = AStruct_WeaponAnimContainer_Menu;
		params.WeaponManufacturer = WeaponManufacturer;
		params.WeaponType = WeaponType;
		params.GripType = GripType;
		params.ForeGripType = ForeGripType;
		params.Debug_Pose_Array = Debug_Pose_Array;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LiveWeaponPoses != nullptr)
			*LiveWeaponPoses = params.LiveWeaponPoses;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_Character_AnimFunctionLibrary.BP_Character_AnimFunctionLibrary_C.SetLocalWeaponSequenceArray_Menu
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FAStruct_WeaponAnimContainer_Menu           AStruct_WeaponAnimContainer_Menu                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		TArray<class FName>                                LiveWeaponPoses                                            (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		int32_t                                            WeaponManufacturer                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            WeaponType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            GripType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ForeGripType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Debug_Pose_Array                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Character_AnimFunctionLibrary_C::STATIC_SetLocalWeaponSequenceArray_Menu(const struct FAStruct_WeaponAnimContainer_Menu& AStruct_WeaponAnimContainer_Menu, TArray<class FName>* LiveWeaponPoses, int32_t WeaponManufacturer, int32_t WeaponType, int32_t GripType, int32_t ForeGripType, bool Debug_Pose_Array, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character_AnimFunctionLibrary.BP_Character_AnimFunctionLibrary_C.SetLocalWeaponSequenceArray_Menu");
		
		UBP_Character_AnimFunctionLibrary_C_SetLocalWeaponSequenceArray_Menu_Params params {};
		params.AStruct_WeaponAnimContainer_Menu = AStruct_WeaponAnimContainer_Menu;
		params.WeaponManufacturer = WeaponManufacturer;
		params.WeaponType = WeaponType;
		params.GripType = GripType;
		params.ForeGripType = ForeGripType;
		params.Debug_Pose_Array = Debug_Pose_Array;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LiveWeaponPoses != nullptr)
			*LiveWeaponPoses = params.LiveWeaponPoses;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_Character_AnimFunctionLibrary.BP_Character_AnimFunctionLibrary_C.SetLocalWeaponSequenceArray_Player
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FAStruct_WeaponAnimContainer                AStruct_WeaponAnimContainer                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		TArray<class FName>                                LiveWeaponPoses                                            (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		int32_t                                            WeaponManufacturer                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            WeaponType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            GripType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ForeGripType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Debug_Pose_Array                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Character_AnimFunctionLibrary_C::STATIC_SetLocalWeaponSequenceArray_Player(const struct FAStruct_WeaponAnimContainer& AStruct_WeaponAnimContainer, TArray<class FName>* LiveWeaponPoses, int32_t WeaponManufacturer, int32_t WeaponType, int32_t GripType, int32_t ForeGripType, bool Debug_Pose_Array, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character_AnimFunctionLibrary.BP_Character_AnimFunctionLibrary_C.SetLocalWeaponSequenceArray_Player");
		
		UBP_Character_AnimFunctionLibrary_C_SetLocalWeaponSequenceArray_Player_Params params {};
		params.AStruct_WeaponAnimContainer = AStruct_WeaponAnimContainer;
		params.WeaponManufacturer = WeaponManufacturer;
		params.WeaponType = WeaponType;
		params.GripType = GripType;
		params.ForeGripType = ForeGripType;
		params.Debug_Pose_Array = Debug_Pose_Array;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LiveWeaponPoses != nullptr)
			*LiveWeaponPoses = params.LiveWeaponPoses;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_Character_AnimFunctionLibrary.BP_Character_AnimFunctionLibrary_C.PostInitCheck
	 * 		Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AOakCharacter*                               Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UGbxCharacterMovementComponent*              GbxMoveComp                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UOakCharacterMovementComponent*              OakMoveComp                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Character_AnimFunctionLibrary_C::STATIC_PostInitCheck(class UObject* Object, class AOakCharacter* Character, class UGbxCharacterMovementComponent* GbxMoveComp, class UOakCharacterMovementComponent* OakMoveComp, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character_AnimFunctionLibrary.BP_Character_AnimFunctionLibrary_C.PostInitCheck");
		
		UBP_Character_AnimFunctionLibrary_C_PostInitCheck_Params params {};
		params.Object = Object;
		params.Character = Character;
		params.GbxMoveComp = GbxMoveComp;
		params.OakMoveComp = OakMoveComp;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_Character_AnimFunctionLibrary.BP_Character_AnimFunctionLibrary_C.Log Error
	 * 		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Log_Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Character_AnimFunctionLibrary_C::STATIC_Log_Error(class UObject* Object, const class FText& Log_Text, class UObject* __WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character_AnimFunctionLibrary.BP_Character_AnimFunctionLibrary_C.Log Error");
		
		UBP_Character_AnimFunctionLibrary_C_Log_Error_Params params {};
		params.Object = Object;
		params.Log_Text = Log_Text;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_Character_AnimFunctionLibrary.BP_Character_AnimFunctionLibrary_C.InitCharacterComponents
	 * 		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AOakCharacter*                               Character                                                  (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UGbxCharacterMovementComponent*              GbxMoveComp                                                (BlueprintVisible, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UOakCharacterMovementComponent*              OakMoveComp                                                (BlueprintVisible, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AOakCharacter*                               Characteroutput                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UGbxCharacterMovementComponent*              GbxCharacterMovement                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UOakCharacterMovementComponent*              OakCharacterMovement                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Character_AnimFunctionLibrary_C::STATIC_InitCharacterComponents(class APawn* Target, class AOakCharacter** Character, class UGbxCharacterMovementComponent** GbxMoveComp, class UOakCharacterMovementComponent** OakMoveComp, class UObject* __WorldContext, class AOakCharacter** Characteroutput, class UGbxCharacterMovementComponent** GbxCharacterMovement, class UOakCharacterMovementComponent** OakCharacterMovement)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Character_AnimFunctionLibrary.BP_Character_AnimFunctionLibrary_C.InitCharacterComponents");
		
		UBP_Character_AnimFunctionLibrary_C_InitCharacterComponents_Params params {};
		params.Target = Target;
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Character != nullptr)
			*Character = params.Character;
		if (GbxMoveComp != nullptr)
			*GbxMoveComp = params.GbxMoveComp;
		if (OakMoveComp != nullptr)
			*OakMoveComp = params.OakMoveComp;
		if (Characteroutput != nullptr)
			*Characteroutput = params.Characteroutput;
		if (GbxCharacterMovement != nullptr)
			*GbxCharacterMovement = params.GbxCharacterMovement;
		if (OakCharacterMovement != nullptr)
			*OakCharacterMovement = params.OakCharacterMovement;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Character_AnimFunctionLibrary_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Character_AnimFunctionLibrary_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Character_AnimFunctionLibrary.BP_Character_AnimFunctionLibrary_C");
		return ptr;
	}

}


