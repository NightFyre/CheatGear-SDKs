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
	 * 		RVA    -> 0x0359EDA0
	 * 		Name   -> Function Interaction.InteractableComponent.SetBoxRotation
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FRotator                                    InBoxRotation                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	void UInteractableComponent::SetBoxRotation(const struct FRotator& InBoxRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interaction.InteractableComponent.SetBoxRotation");
		
		UInteractableComponent_SetBoxRotation_Params params {};
		params.InBoxRotation = InBoxRotation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0359ED10
	 * 		Name   -> Function Interaction.InteractableComponent.SetBoxOrigin
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     IntBoxOrigin                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	void UInteractableComponent::SetBoxOrigin(const struct FVector& IntBoxOrigin)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interaction.InteractableComponent.SetBoxOrigin");
		
		UInteractableComponent_SetBoxOrigin_Params params {};
		params.IntBoxOrigin = IntBoxOrigin;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0359EC80
	 * 		Name   -> Function Interaction.InteractableComponent.SetBoxExtent
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     InBoxExtent                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	void UInteractableComponent::SetBoxExtent(const struct FVector& InBoxExtent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interaction.InteractableComponent.SetBoxExtent");
		
		UInteractableComponent_SetBoxExtent_Params params {};
		params.InBoxExtent = InBoxExtent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0359E900
	 * 		Name   -> Function Interaction.InteractableComponent.GetInteractableArea
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UInteractableArea* UInteractableComponent::GetInteractableArea()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interaction.InteractableComponent.GetInteractableArea");
		
		UInteractableComponent_GetInteractableArea_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0359E750
	 * 		Name   -> Function Interaction.InteractableComponent.GetBoxWorldOrigin
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FVector UInteractableComponent::GetBoxWorldOrigin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interaction.InteractableComponent.GetBoxWorldOrigin");
		
		UInteractableComponent_GetBoxWorldOrigin_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0359E720
	 * 		Name   -> Function Interaction.InteractableComponent.GetBoxSphereRadius
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UInteractableComponent::GetBoxSphereRadius()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interaction.InteractableComponent.GetBoxSphereRadius");
		
		UInteractableComponent_GetBoxSphereRadius_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0359E6E0
	 * 		Name   -> Function Interaction.InteractableComponent.GetBoxRotation
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FRotator UInteractableComponent::GetBoxRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interaction.InteractableComponent.GetBoxRotation");
		
		UInteractableComponent_GetBoxRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0359E6A0
	 * 		Name   -> Function Interaction.InteractableComponent.GetBoxOrigin
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FVector UInteractableComponent::GetBoxOrigin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interaction.InteractableComponent.GetBoxOrigin");
		
		UInteractableComponent_GetBoxOrigin_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0359E660
	 * 		Name   -> Function Interaction.InteractableComponent.GetBoxExtent
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FVector UInteractableComponent::GetBoxExtent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interaction.InteractableComponent.GetBoxExtent");
		
		UInteractableComponent_GetBoxExtent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInteractableComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInteractableComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Interaction.InteractableComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInteractionValidatorSetterInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInteractionValidatorSetterInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Interaction.InteractionValidatorSetterInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0359EAD0
	 * 		Name   -> Function Interaction.CharacterInteractionComponent.IsInteractionValid
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     InInteractable                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UCharacterInteractionComponent::IsInteractionValid(class UObject* InInteractable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interaction.CharacterInteractionComponent.IsInteractionValid");
		
		UCharacterInteractionComponent_IsInteractionValid_Params params {};
		params.InInteractable = InInteractable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0359EA80
	 * 		Name   -> Function Interaction.CharacterInteractionComponent.InvalidateOptimalObject
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UCharacterInteractionComponent::InvalidateOptimalObject()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interaction.CharacterInteractionComponent.InvalidateOptimalObject");
		
		UCharacterInteractionComponent_InvalidateOptimalObject_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0359E960
	 * 		Name   -> Function Interaction.CharacterInteractionComponent.GetOptimalFocusObject
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UInteractableArea* UCharacterInteractionComponent::GetOptimalFocusObject()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interaction.CharacterInteractionComponent.GetOptimalFocusObject");
		
		UCharacterInteractionComponent_GetOptimalFocusObject_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0359E410
	 * 		Name   -> Function Interaction.CharacterInteractionComponent.ClearAllPolicies
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UCharacterInteractionComponent::ClearAllPolicies()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interaction.CharacterInteractionComponent.ClearAllPolicies");
		
		UCharacterInteractionComponent_ClearAllPolicies_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCharacterInteractionComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCharacterInteractionComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Interaction.CharacterInteractionComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGroupedInteractableAreaComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGroupedInteractableAreaComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Interaction.GroupedInteractableAreaComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0359EF90
	 * 		Name   -> Function Interaction.InteractableArea.SetParent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      InParent                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInteractableArea::SetParent(class AActor* InParent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interaction.InteractableArea.SetParent");
		
		UInteractableArea_SetParent_Params params {};
		params.InParent = InParent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0359EE30
	 * 		Name   -> Function Interaction.InteractableArea.SetInteractable
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     InInteractable                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInteractableArea::SetInteractable(class UObject* InInteractable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interaction.InteractableArea.SetInteractable");
		
		UInteractableArea_SetInteractable_Params params {};
		params.InInteractable = InInteractable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0359EBF0
	 * 		Name   -> Function Interaction.InteractableArea.SetAreaName
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        InName                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInteractableArea::SetAreaName(const class FName& InName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interaction.InteractableArea.SetAreaName");
		
		UInteractableArea_SetAreaName_Params params {};
		params.InName = InName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0359EB60
	 * 		Name   -> Function Interaction.InteractableArea.SetAreaBounds
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FBoxSphereBounds                            InBounds                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	void UInteractableArea::SetAreaBounds(const struct FBoxSphereBounds& InBounds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interaction.InteractableArea.SetAreaBounds");
		
		UInteractableArea_SetAreaBounds_Params params {};
		params.InBounds = InBounds;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0359E990
	 * 		Name   -> Function Interaction.InteractableArea.GetParent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class AActor* UInteractableArea::GetParent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interaction.InteractableArea.GetParent");
		
		UInteractableArea_GetParent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0359E8D0
	 * 		Name   -> Function Interaction.InteractableArea.GetInteractable
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UObject* UInteractableArea::GetInteractable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interaction.InteractableArea.GetInteractable");
		
		UInteractableArea_GetInteractable_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0359E620
	 * 		Name   -> Function Interaction.InteractableArea.GetAreaName
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class FName UInteractableArea::GetAreaName()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interaction.InteractableArea.GetAreaName");
		
		UInteractableArea_GetAreaName_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0359E5E0
	 * 		Name   -> Function Interaction.InteractableArea.GetAreaLocation
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FVector UInteractableArea::GetAreaLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interaction.InteractableArea.GetAreaLocation");
		
		UInteractableArea_GetAreaLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0359E5A0
	 * 		Name   -> Function Interaction.InteractableArea.GetAreaBounds
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FBoxSphereBounds UInteractableArea::GetAreaBounds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interaction.InteractableArea.GetAreaBounds");
		
		UInteractableArea_GetAreaBounds_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInteractableArea.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInteractableArea::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Interaction.InteractableArea");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0359F010
	 * 		Name   -> Function Interaction.InteractableInterface.ShouldDrawTooltipInWorldSpace
	 * 		Flags  -> (Native, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      InInteractor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     DesiredTooltipWorldPosition                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UInteractableInterface::ShouldDrawTooltipInWorldSpace(class AActor* InInteractor, struct FVector* DesiredTooltipWorldPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interaction.InteractableInterface.ShouldDrawTooltipInWorldSpace");
		
		UInteractableInterface_ShouldDrawTooltipInWorldSpace_Params params {};
		params.InInteractor = InInteractor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DesiredTooltipWorldPosition != nullptr)
			*DesiredTooltipWorldPosition = params.DesiredTooltipWorldPosition;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0359EAA0
	 * 		Name   -> Function Interaction.InteractableInterface.IsInteractableDisabled
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	bool UInteractableInterface::IsInteractableDisabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interaction.InteractableInterface.IsInteractableDisabled");
		
		UInteractableInterface_IsInteractableDisabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0359E9C0
	 * 		Name   -> Function Interaction.InteractableInterface.Interact
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      InInteractor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      NotificationInputId                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void UInteractableInterface::Interact(class AActor* InInteractor, class UClass* NotificationInputId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interaction.InteractableInterface.Interact");
		
		UInteractableInterface_Interact_Params params {};
		params.InInteractor = InInteractor;
		params.NotificationInputId = NotificationInputId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0359E930
	 * 		Name   -> Function Interaction.InteractableInterface.GetInteractionState
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	EInteractableState UInteractableInterface::GetInteractionState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interaction.InteractableInterface.GetInteractionState");
		
		UInteractableInterface_GetInteractionState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0359E890
	 * 		Name   -> Function Interaction.InteractableInterface.GetFrontFacingVector
	 * 		Flags  -> (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	struct FVector UInteractableInterface::GetFrontFacingVector()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interaction.InteractableInterface.GetFrontFacingVector");
		
		UInteractableInterface_GetFrontFacingVector_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0359E790
	 * 		Name   -> Function Interaction.InteractableInterface.GetClosestInteractionPoint
	 * 		Flags  -> (Native, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     ReferencePosition                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		float                                              OutInteractionPointRadius                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FVector UInteractableInterface::GetClosestInteractionPoint(const struct FVector& ReferencePosition, float* OutInteractionPointRadius)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interaction.InteractableInterface.GetClosestInteractionPoint");
		
		UInteractableInterface_GetClosestInteractionPoint_Params params {};
		params.ReferencePosition = ReferencePosition;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutInteractionPointRadius != nullptr)
			*OutInteractionPointRadius = params.OutInteractionPointRadius;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0359E4F0
	 * 		Name   -> Function Interaction.InteractableInterface.GetActorsToIgnoreDuringOcclusionChecker
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		TArray<class AActor*>                              ActorsToIgnore                                             (Parm, OutParm, ZeroConstructor)
	 */
	void UInteractableInterface::GetActorsToIgnoreDuringOcclusionChecker(TArray<class AActor*>* ActorsToIgnore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interaction.InteractableInterface.GetActorsToIgnoreDuringOcclusionChecker");
		
		UInteractableInterface_GetActorsToIgnoreDuringOcclusionChecker_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ActorsToIgnore != nullptr)
			*ActorsToIgnore = params.ActorsToIgnore;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0359E4C0
	 * 		Name   -> Function Interaction.InteractableInterface.GetActionRulesComponent
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	class UActionRulesComponent* UInteractableInterface::GetActionRulesComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interaction.InteractableInterface.GetActionRulesComponent");
		
		UInteractableInterface_GetActionRulesComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0359E490
	 * 		Name   -> Function Interaction.InteractableInterface.DoesRequireNotSwimming
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	bool UInteractableInterface::DoesRequireNotSwimming()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interaction.InteractableInterface.DoesRequireNotSwimming");
		
		UInteractableInterface_DoesRequireNotSwimming_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0359E460
	 * 		Name   -> Function Interaction.InteractableInterface.DoesRequireNotBeingAirborne
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	bool UInteractableInterface::DoesRequireNotBeingAirborne()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interaction.InteractableInterface.DoesRequireNotBeingAirborne");
		
		UInteractableInterface_DoesRequireNotBeingAirborne_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0359E430
	 * 		Name   -> Function Interaction.InteractableInterface.DoesRequireFacingFront
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	bool UInteractableInterface::DoesRequireFacingFront()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interaction.InteractableInterface.DoesRequireFacingFront");
		
		UInteractableInterface_DoesRequireFacingFront_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0359E340
	 * 		Name   -> Function Interaction.InteractableInterface.CanInteractWithNotificationInputId
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      InInteractor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      NotificationInputId                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	bool UInteractableInterface::CanInteractWithNotificationInputId(class AActor* InInteractor, class UClass* NotificationInputId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interaction.InteractableInterface.CanInteractWithNotificationInputId");
		
		UInteractableInterface_CanInteractWithNotificationInputId_Params params {};
		params.InInteractor = InInteractor;
		params.NotificationInputId = NotificationInputId;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0359E2A0
	 * 		Name   -> Function Interaction.InteractableInterface.CanInteract
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      InInteractor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UInteractableInterface::CanInteract(class AActor* InInteractor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interaction.InteractableInterface.CanInteract");
		
		UInteractableInterface_CanInteract_Params params {};
		params.InInteractor = InInteractor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInteractableInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInteractableInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Interaction.InteractableInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0359EEB0
	 * 		Name   -> Function Interaction.InteractableBlueprintFunctionLibrary.SetInteractionState
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      InteractableActor                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EInteractableState                                 NewInteractableState                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInteractableBlueprintFunctionLibrary::STATIC_SetInteractionState(class AActor* InteractableActor, EInteractableState NewInteractableState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interaction.InteractableBlueprintFunctionLibrary.SetInteractionState");
		
		UInteractableBlueprintFunctionLibrary_SetInteractionState_Params params {};
		params.InteractableActor = InteractableActor;
		params.NewInteractableState = NewInteractableState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInteractableBlueprintFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInteractableBlueprintFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Interaction.InteractableBlueprintFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInteractableIdentifierInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInteractableIdentifierInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Interaction.InteractableIdentifierInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInteractableServiceInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInteractableServiceInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Interaction.InteractableServiceInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInteractableService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInteractableService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Interaction.InteractableService");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInteractionPreventionInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInteractionPreventionInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Interaction.InteractionPreventionInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInteractionPreventionComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInteractionPreventionComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Interaction.InteractionPreventionComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInteractionValidatorOwnerInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInteractionValidatorOwnerInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Interaction.InteractionValidatorOwnerInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInteractorInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInteractorInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Interaction.InteractorInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMockActorWithCharacterInteractionComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMockActorWithCharacterInteractionComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Interaction.MockActorWithCharacterInteractionComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMockInteractableService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMockInteractableService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Interaction.MockInteractableService");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMockInteractorActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMockInteractorActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Interaction.MockInteractorActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USelfInteractionInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USelfInteractionInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class Interaction.SelfInteractionInterface");
		return ptr;
	}

}


