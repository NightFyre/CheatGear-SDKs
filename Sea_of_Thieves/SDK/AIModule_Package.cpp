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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTAuxiliaryNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTAuxiliaryNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTAuxiliaryNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTDecorator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_BlackboardBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_BlackboardBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTDecorator_BlackboardBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTService");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTaskNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTaskNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTTaskNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_BlackboardBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_BlackboardBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTTask_BlackboardBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_RunEQSQuery.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_RunEQSQuery::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTTask_RunEQSQuery");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_RotateToFaceBBEntry.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_RotateToFaceBBEntry::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTTask_RotateToFaceBBEntry");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryContext.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryContext::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryContext");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryGenerator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryGenerator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryTest.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryTest::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryTest");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIResourceInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIResourceInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AIResourceInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023235F0
	 * 		Name   -> Function AIModule.PathFollowingComponent.OnActorBump
	 * 		Flags  -> (Native, Public, HasOutParms, HasDefaults)
	 * Parameters:
	 * 		class AActor*                                      SelfActor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     NormalImpulse                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 */
	void UPathFollowingComponent::OnActorBump(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.PathFollowingComponent.OnActorBump");
		
		UPathFollowingComponent_OnActorBump_Params params {};
		params.SelfActor = SelfActor;
		params.OtherActor = OtherActor;
		params.NormalImpulse = NormalImpulse;
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02321AD0
	 * 		Name   -> Function AIModule.PathFollowingComponent.GetPathDestination
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FVector UPathFollowingComponent::GetPathDestination()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.PathFollowingComponent.GetPathDestination");
		
		UPathFollowingComponent_GetPathDestination_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02321AA0
	 * 		Name   -> Function AIModule.PathFollowingComponent.GetPathActionType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EPathFollowingAction UPathFollowingComponent::GetPathActionType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.PathFollowingComponent.GetPathActionType");
		
		UPathFollowingComponent_GetPathActionType_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPathFollowingComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPathFollowingComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.PathFollowingComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02323860
	 * 		Name   -> Function AIModule.AIAsyncTaskBlueprintProxy.OnMoveCompleted
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		struct FAIRequestID                                RequestID                                                  (Parm)
	 * 		EPathFollowingResult                               MovementResult                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAIAsyncTaskBlueprintProxy::OnMoveCompleted(const struct FAIRequestID& RequestID, EPathFollowingResult MovementResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AIAsyncTaskBlueprintProxy.OnMoveCompleted");
		
		UAIAsyncTaskBlueprintProxy_OnMoveCompleted_Params params {};
		params.RequestID = RequestID;
		params.MovementResult = MovementResult;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIAsyncTaskBlueprintProxy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIAsyncTaskBlueprintProxy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AIAsyncTaskBlueprintProxy");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023263E0
	 * 		Name   -> Function AIModule.AIBlueprintHelperLibrary.UnlockAIResourcesWithAnimation
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAnimInstance*                               AnimInstance                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bUnlockMovement                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               UnlockAILogic                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAIBlueprintHelperLibrary::STATIC_UnlockAIResourcesWithAnimation(class UAnimInstance* AnimInstance, bool bUnlockMovement, bool UnlockAILogic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.UnlockAIResourcesWithAnimation");
		
		UAIBlueprintHelperLibrary_UnlockAIResourcesWithAnimation_Params params {};
		params.AnimInstance = AnimInstance;
		params.bUnlockMovement = bUnlockMovement;
		params.UnlockAILogic = UnlockAILogic;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02325FB0
	 * 		Name   -> Function AIModule.AIBlueprintHelperLibrary.SpawnAIFromClass
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      PawnClass                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 * 		class UBehaviorTree*                               BehaviorTree                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bNoCollisionFail                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class APawn* UAIBlueprintHelperLibrary::STATIC_SpawnAIFromClass(class UObject* WorldContextObject, class UClass* PawnClass, class UBehaviorTree* BehaviorTree, const struct FVector& Location, const struct FRotator& Rotation, bool bNoCollisionFail)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.SpawnAIFromClass");
		
		UAIBlueprintHelperLibrary_SpawnAIFromClass_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.PawnClass = PawnClass;
		params.BehaviorTree = BehaviorTree;
		params.Location = Location;
		params.Rotation = Rotation;
		params.bNoCollisionFail = bNoCollisionFail;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023244E0
	 * 		Name   -> Function AIModule.AIBlueprintHelperLibrary.SendAIMessage
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APawn*                                       Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Message                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     MessageSource                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bSuccess                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAIBlueprintHelperLibrary::STATIC_SendAIMessage(class APawn* Target, const class FName& Message, class UObject* MessageSource, bool bSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.SendAIMessage");
		
		UAIBlueprintHelperLibrary_SendAIMessage_Params params {};
		params.Target = Target;
		params.Message = Message;
		params.MessageSource = MessageSource;
		params.bSuccess = bSuccess;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02323050
	 * 		Name   -> Function AIModule.AIBlueprintHelperLibrary.LockAIResourcesWithAnimation
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAnimInstance*                               AnimInstance                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bLockMovement                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               LockAILogic                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UAIBlueprintHelperLibrary::STATIC_LockAIResourcesWithAnimation(class UAnimInstance* AnimInstance, bool bLockMovement, bool LockAILogic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.LockAIResourcesWithAnimation");
		
		UAIBlueprintHelperLibrary_LockAIResourcesWithAnimation_Params params {};
		params.AnimInstance = AnimInstance;
		params.bLockMovement = bLockMovement;
		params.LockAILogic = LockAILogic;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02322AD0
	 * 		Name   -> Function AIModule.AIBlueprintHelperLibrary.IsValidAIRotation
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FRotator                                    Rotation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UAIBlueprintHelperLibrary::STATIC_IsValidAIRotation(const struct FRotator& Rotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.IsValidAIRotation");
		
		UAIBlueprintHelperLibrary_IsValidAIRotation_Params params {};
		params.Rotation = Rotation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02322A40
	 * 		Name   -> Function AIModule.AIBlueprintHelperLibrary.IsValidAILocation
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UAIBlueprintHelperLibrary::STATIC_IsValidAILocation(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.IsValidAILocation");
		
		UAIBlueprintHelperLibrary_IsValidAILocation_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023229B0
	 * 		Name   -> Function AIModule.AIBlueprintHelperLibrary.IsValidAIDirection
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FVector                                     DirectionVector                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UAIBlueprintHelperLibrary::STATIC_IsValidAIDirection(const struct FVector& DirectionVector)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.IsValidAIDirection");
		
		UAIBlueprintHelperLibrary_IsValidAIDirection_Params params {};
		params.DirectionVector = DirectionVector;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02320A90
	 * 		Name   -> Function AIModule.AIBlueprintHelperLibrary.GetBlackboard
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UBlackboardComponent* UAIBlueprintHelperLibrary::STATIC_GetBlackboard(class AActor* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.GetBlackboard");
		
		UAIBlueprintHelperLibrary_GetBlackboard_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02320750
	 * 		Name   -> Function AIModule.AIBlueprintHelperLibrary.GetAIController
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      ControlledActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class AAIController* UAIBlueprintHelperLibrary::STATIC_GetAIController(class AActor* ControlledActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.GetAIController");
		
		UAIBlueprintHelperLibrary_GetAIController_Params params {};
		params.ControlledActor = ControlledActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023203C0
	 * 		Name   -> Function AIModule.AIBlueprintHelperLibrary.CreateMoveToProxyObject
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Destination                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      TargetActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              AcceptanceRadius                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bStopOnOverlap                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class UAIAsyncTaskBlueprintProxy* UAIBlueprintHelperLibrary::STATIC_CreateMoveToProxyObject(class UObject* WorldContextObject, class APawn* Pawn, const struct FVector& Destination, class AActor* TargetActor, float AcceptanceRadius, bool bStopOnOverlap)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AIBlueprintHelperLibrary.CreateMoveToProxyObject");
		
		UAIBlueprintHelperLibrary_CreateMoveToProxyObject_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Pawn = Pawn;
		params.Destination = Destination;
		params.TargetActor = TargetActor;
		params.AcceptanceRadius = AcceptanceRadius;
		params.bStopOnOverlap = bStopOnOverlap;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIBlueprintHelperLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIBlueprintHelperLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AIBlueprintHelperLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02322E40
	 * 		Name   -> Function AIModule.PawnActionsComponent.K2_PushAction
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UPawnAction*                                 NewAction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EAIRequestPriority                                 Priority                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Instigator                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UPawnActionsComponent::K2_PushAction(class UPawnAction* NewAction, EAIRequestPriority Priority, class UObject* Instigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.PawnActionsComponent.K2_PushAction");
		
		UPawnActionsComponent_K2_PushAction_Params params {};
		params.NewAction = NewAction;
		params.Priority = Priority;
		params.Instigator = Instigator;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02322D40
	 * 		Name   -> Function AIModule.PawnActionsComponent.K2_PerformAction
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPawnAction*                                 Action                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EAIRequestPriority                                 Priority                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UPawnActionsComponent::STATIC_K2_PerformAction(class APawn* Pawn, class UPawnAction* Action, EAIRequestPriority Priority)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.PawnActionsComponent.K2_PerformAction");
		
		UPawnActionsComponent_K2_PerformAction_Params params {};
		params.Pawn = Pawn;
		params.Action = Action;
		params.Priority = Priority;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02322CB0
	 * 		Name   -> Function AIModule.PawnActionsComponent.K2_ForceAbortAction
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UPawnAction*                                 ActionToAbort                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	EPawnActionAbortState UPawnActionsComponent::K2_ForceAbortAction(class UPawnAction* ActionToAbort)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.PawnActionsComponent.K2_ForceAbortAction");
		
		UPawnActionsComponent_K2_ForceAbortAction_Params params {};
		params.ActionToAbort = ActionToAbort;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02322C00
	 * 		Name   -> Function AIModule.PawnActionsComponent.K2_AbortAction
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UPawnAction*                                 ActionToAbort                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	EPawnActionAbortState UPawnActionsComponent::K2_AbortAction(class UPawnAction* ActionToAbort)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.PawnActionsComponent.K2_AbortAction");
		
		UPawnActionsComponent_K2_AbortAction_Params params {};
		params.ActionToAbort = ActionToAbort;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPawnActionsComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPawnActionsComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.PawnActionsComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIPerceptionListenerInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIPerceptionListenerInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AIPerceptionListenerInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBlackboardKeyType.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlackboardKeyType::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BlackboardKeyType");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBehaviorTreeTypes.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBehaviorTreeTypes::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BehaviorTreeTypes");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGenericTeamAgentInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGenericTeamAgentInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.GenericTeamAgentInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02326590
	 * 		Name   -> Function AIModule.AIController.UseBlackboard
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UBlackboardData*                             BlackboardAsset                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBlackboardComponent*                        BlackboardComponent                                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool AAIController::UseBlackboard(class UBlackboardData* BlackboardAsset, class UBlackboardComponent** BlackboardComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AIController.UseBlackboard");
		
		AAIController_UseBlackboard_Params params {};
		params.BlackboardAsset = BlackboardAsset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BlackboardComponent != nullptr)
			*BlackboardComponent = params.BlackboardComponent;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02325500
	 * 		Name   -> Function AIModule.AIController.SetMoveBlockDetection
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bEnable                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAIController::SetMoveBlockDetection(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AIController.SetMoveBlockDetection");
		
		AAIController_SetMoveBlockDetection_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023242B0
	 * 		Name   -> Function AIModule.AIController.RunBehaviorTree
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UBehaviorTree*                               BTAsset                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool AAIController::RunBehaviorTree(class UBehaviorTree* BTAsset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AIController.RunBehaviorTree");
		
		AAIController_RunBehaviorTree_Params params {};
		params.BTAsset = BTAsset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function AIModule.AIController.OnUsingBlackBoard
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class UBlackboardComponent*                        BlackboardComp                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UBlackboardData*                             BlackboardAsset                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAIController::OnUsingBlackBoard(class UBlackboardComponent* BlackboardComp, class UBlackboardData* BlackboardAsset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AIController.OnUsingBlackBoard");
		
		AAIController_OnUsingBlackBoard_Params params {};
		params.BlackboardComp = BlackboardComp;
		params.BlackboardAsset = BlackboardAsset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function AIModule.AIController.OnPossess
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       PossessedPawn                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAIController::OnPossess(class APawn* PossessedPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AIController.OnPossess");
		
		AAIController_OnPossess_Params params {};
		params.PossessedPawn = PossessedPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02323790
	 * 		Name   -> Function AIModule.AIController.OnGameplayTaskResourcesClaimed
	 * 		Flags  -> (Native, Public)
	 * Parameters:
	 * 		struct FGameplayResourceSet                        NewlyClaimed                                               (Parm)
	 * 		struct FGameplayResourceSet                        FreshlyReleased                                            (Parm)
	 */
	void AAIController::OnGameplayTaskResourcesClaimed(const struct FGameplayResourceSet& NewlyClaimed, const struct FGameplayResourceSet& FreshlyReleased)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AIController.OnGameplayTaskResourcesClaimed");
		
		AAIController_OnGameplayTaskResourcesClaimed_Params params {};
		params.NewlyClaimed = NewlyClaimed;
		params.FreshlyReleased = FreshlyReleased;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02323380
	 * 		Name   -> Function AIModule.AIController.MoveToLocation
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     Dest                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		float                                              AcceptanceRadius                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bStopOnOverlap                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	 * 		bool                                               bUsePathfinding                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bProjectDestinationToNavigation                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bCanStrafe                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	 * 		class UClass*                                      FilterClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 * 		bool                                               bAllowPartialPath                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	 */
	EPathFollowingRequestResult AAIController::MoveToLocation(const struct FVector& Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, class UClass* FilterClass, bool bAllowPartialPath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AIController.MoveToLocation");
		
		AAIController_MoveToLocation_Params params {};
		params.Dest = Dest;
		params.AcceptanceRadius = AcceptanceRadius;
		params.bStopOnOverlap = bStopOnOverlap;
		params.bUsePathfinding = bUsePathfinding;
		params.bProjectDestinationToNavigation = bProjectDestinationToNavigation;
		params.bCanStrafe = bCanStrafe;
		params.FilterClass = FilterClass;
		params.bAllowPartialPath = bAllowPartialPath;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02323160
	 * 		Name   -> Function AIModule.AIController.MoveToActor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Goal                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              AcceptanceRadius                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bStopOnOverlap                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	 * 		bool                                               bUsePathfinding                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bCanStrafe                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	 * 		class UClass*                                      FilterClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 * 		bool                                               bAllowPartialPath                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	 */
	EPathFollowingRequestResult AAIController::MoveToActor(class AActor* Goal, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bCanStrafe, class UClass* FilterClass, bool bAllowPartialPath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AIController.MoveToActor");
		
		AAIController_MoveToActor_Params params {};
		params.Goal = Goal;
		params.AcceptanceRadius = AcceptanceRadius;
		params.bStopOnOverlap = bStopOnOverlap;
		params.bUsePathfinding = bUsePathfinding;
		params.bCanStrafe = bCanStrafe;
		params.FilterClass = FilterClass;
		params.bAllowPartialPath = bAllowPartialPath;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02322FD0
	 * 		Name   -> Function AIModule.AIController.K2_SetFocus
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      NewFocus                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AAIController::K2_SetFocus(class AActor* NewFocus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AIController.K2_SetFocus");
		
		AAIController_K2_SetFocus_Params params {};
		params.NewFocus = NewFocus;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02322F40
	 * 		Name   -> Function AIModule.AIController.K2_SetFocalPoint
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     FP                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AAIController::K2_SetFocalPoint(const struct FVector& FP)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AIController.K2_SetFocalPoint");
		
		AAIController_K2_SetFocalPoint_Params params {};
		params.FP = FP;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02322C90
	 * 		Name   -> Function AIModule.AIController.K2_ClearFocus
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AAIController::K2_ClearFocus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AIController.K2_ClearFocus");
		
		AAIController_K2_ClearFocus_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02322800
	 * 		Name   -> Function AIModule.AIController.HasPartialPath
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AAIController::HasPartialPath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AIController.HasPartialPath");
		
		AAIController_HasPartialPath_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02321B10
	 * 		Name   -> Function AIModule.AIController.GetPathFollowingComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UPathFollowingComponent* AAIController::GetPathFollowingComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AIController.GetPathFollowingComponent");
		
		AAIController_GetPathFollowingComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02321970
	 * 		Name   -> Function AIModule.AIController.GetMoveStatus
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EPathFollowingStatus AAIController::GetMoveStatus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AIController.GetMoveStatus");
		
		AAIController_GetMoveStatus_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023217B0
	 * 		Name   -> Function AIModule.AIController.GetImmediateMoveDestination
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FVector AAIController::GetImmediateMoveDestination()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AIController.GetImmediateMoveDestination");
		
		AAIController_GetImmediateMoveDestination_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02321780
	 * 		Name   -> Function AIModule.AIController.GetFocusActor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class AActor* AAIController::GetFocusActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AIController.GetFocusActor");
		
		AAIController_GetFocusActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023216D0
	 * 		Name   -> Function AIModule.AIController.GetFocalPointOnActor
	 * 		Flags  -> (Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FVector AAIController::GetFocalPointOnActor(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AIController.GetFocalPointOnActor");
		
		AAIController_GetFocalPointOnActor_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02321690
	 * 		Name   -> Function AIModule.AIController.GetFocalPoint
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FVector AAIController::GetFocalPoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AIController.GetFocalPoint");
		
		AAIController_GetFocalPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023207D0
	 * 		Name   -> Function AIModule.AIController.GetAIPerceptionComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	class UAIPerceptionComponent* AAIController::GetAIPerceptionComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AIController.GetAIPerceptionComponent");
		
		AAIController_GetAIPerceptionComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAIController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAIController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AIController");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADetourCrowdAIController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADetourCrowdAIController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.DetourCrowdAIController");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIDataProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIDataProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AIDataProvider");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomDataProviderObject.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomDataProviderObject::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.CustomDataProviderObject");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIDataProvider_QueryParamFromCustomObjectProperty.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIDataProvider_QueryParamFromCustomObjectProperty::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AIDataProvider_QueryParamFromCustomObjectProperty");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIDataProvider_QueryParams.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIDataProvider_QueryParams::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AIDataProvider_QueryParams");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIHotSpotManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIHotSpotManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AIHotSpotManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0231FAF0
	 * 		Name   -> Function AIModule.AISystem.AILoggingVerbose
	 * 		Flags  -> (Exec, Native, Public)
	 */
	void UAISystem::AILoggingVerbose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AISystem.AILoggingVerbose");
		
		UAISystem_AILoggingVerbose_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0231FAD0
	 * 		Name   -> Function AIModule.AISystem.AIIgnorePlayers
	 * 		Flags  -> (Exec, Native, Public)
	 */
	void UAISystem::AIIgnorePlayers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AISystem.AIIgnorePlayers");
		
		UAISystem_AIIgnorePlayers_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AISystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISense.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISense::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AISense");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02323FC0
	 * 		Name   -> Function AIModule.AIPerceptionSystem.ReportPerceptionEvent
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAISenseEvent*                               PerceptionEvent                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAIPerceptionSystem::STATIC_ReportPerceptionEvent(class UObject* WorldContext, class UAISenseEvent* PerceptionEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionSystem.ReportPerceptionEvent");
		
		UAIPerceptionSystem_ReportPerceptionEvent_Params params {};
		params.WorldContext = WorldContext;
		params.PerceptionEvent = PerceptionEvent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02323D80
	 * 		Name   -> Function AIModule.AIPerceptionSystem.ReportEvent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UAISenseEvent*                               PerceptionEvent                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAIPerceptionSystem::ReportEvent(class UAISenseEvent* PerceptionEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionSystem.ReportEvent");
		
		UAIPerceptionSystem_ReportEvent_Params params {};
		params.PerceptionEvent = PerceptionEvent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02323AA0
	 * 		Name   -> Function AIModule.AIPerceptionSystem.RegisterPerceptionStimuliSource
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      Sense                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 * 		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UAIPerceptionSystem::STATIC_RegisterPerceptionStimuliSource(class UObject* WorldContext, class UClass* Sense, class AActor* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionSystem.RegisterPerceptionStimuliSource");
		
		UAIPerceptionSystem_RegisterPerceptionStimuliSource_Params params {};
		params.WorldContext = WorldContext;
		params.Sense = Sense;
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023239A0
	 * 		Name   -> Function AIModule.AIPerceptionSystem.OnPerceptionStimuliSourceEndPlay
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAIPerceptionSystem::OnPerceptionStimuliSourceEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionSystem.OnPerceptionStimuliSourceEndPlay");
		
		UAIPerceptionSystem_OnPerceptionStimuliSourceEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02321F80
	 * 		Name   -> Function AIModule.AIPerceptionSystem.GetSenseClassForStimulus
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FAIStimulus                                 Stimulus                                                   (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	class UClass* UAIPerceptionSystem::STATIC_GetSenseClassForStimulus(class UObject* WorldContext, const struct FAIStimulus& Stimulus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionSystem.GetSenseClassForStimulus");
		
		UAIPerceptionSystem_GetSenseClassForStimulus_Params params {};
		params.WorldContext = WorldContext;
		params.Stimulus = Stimulus;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIPerceptionSystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIPerceptionSystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AIPerceptionSystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02324270
	 * 		Name   -> Function AIModule.AIPerceptionComponent.RequestStimuliListenerUpdate
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UAIPerceptionComponent::RequestStimuliListenerUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionComponent.RequestStimuliListenerUpdate");
		
		UAIPerceptionComponent_RequestStimuliListenerUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02323920
	 * 		Name   -> Function AIModule.AIPerceptionComponent.OnOwnerEndPlay
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAIPerceptionComponent::OnOwnerEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionComponent.OnOwnerEndPlay");
		
		UAIPerceptionComponent_OnOwnerEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02322890
	 * 		Name   -> Function AIModule.AIPerceptionComponent.IsIgnored
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UAIPerceptionComponent::IsIgnored(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionComponent.IsIgnored");
		
		UAIPerceptionComponent_IsIgnored_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02321C30
	 * 		Name   -> Function AIModule.AIPerceptionComponent.GetPerceivedHostileActors
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		TArray<class AActor*>                              OutActors                                                  (Parm, OutParm, ZeroConstructor)
	 */
	void UAIPerceptionComponent::GetPerceivedHostileActors(TArray<class AActor*>* OutActors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionComponent.GetPerceivedHostileActors");
		
		UAIPerceptionComponent_GetPerceivedHostileActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutActors != nullptr)
			*OutActors = params.OutActors;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02321B40
	 * 		Name   -> Function AIModule.AIPerceptionComponent.GetPerceivedActors
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UClass*                                      SenseToUse                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 * 		TArray<class AActor*>                              OutActors                                                  (Parm, OutParm, ZeroConstructor)
	 */
	void UAIPerceptionComponent::GetPerceivedActors(class UClass* SenseToUse, TArray<class AActor*>* OutActors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionComponent.GetPerceivedActors");
		
		UAIPerceptionComponent_GetPerceivedActors_Params params {};
		params.SenseToUse = SenseToUse;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutActors != nullptr)
			*OutActors = params.OutActors;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02320820
	 * 		Name   -> Function AIModule.AIPerceptionComponent.GetActorsPerception
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FActorPerceptionBlueprintInfo               Info                                                       (Parm, OutParm)
	 */
	bool UAIPerceptionComponent::GetActorsPerception(class AActor* Actor, struct FActorPerceptionBlueprintInfo* Info)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionComponent.GetActorsPerception");
		
		UAIPerceptionComponent_GetActorsPerception_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Info != nullptr)
			*Info = params.Info;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIPerceptionComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIPerceptionComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AIPerceptionComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02326510
	 * 		Name   -> Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromSense
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      SenseClass                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void UAIPerceptionStimuliSourceComponent::UnregisterFromSense(class UClass* SenseClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromSense");
		
		UAIPerceptionStimuliSourceComponent_UnregisterFromSense_Params params {};
		params.SenseClass = SenseClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023264F0
	 * 		Name   -> Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromPerceptionSystem
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UAIPerceptionStimuliSourceComponent::UnregisterFromPerceptionSystem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromPerceptionSystem");
		
		UAIPerceptionStimuliSourceComponent_UnregisterFromPerceptionSystem_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02323B90
	 * 		Name   -> Function AIModule.AIPerceptionStimuliSourceComponent.RegisterWithPerceptionSystem
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UAIPerceptionStimuliSourceComponent::RegisterWithPerceptionSystem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionStimuliSourceComponent.RegisterWithPerceptionSystem");
		
		UAIPerceptionStimuliSourceComponent_RegisterWithPerceptionSystem_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02323A20
	 * 		Name   -> Function AIModule.AIPerceptionStimuliSourceComponent.RegisterForSense
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UClass*                                      SenseClass                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void UAIPerceptionStimuliSourceComponent::RegisterForSense(class UClass* SenseClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AIPerceptionStimuliSourceComponent.RegisterForSense");
		
		UAIPerceptionStimuliSourceComponent_RegisterForSense_Params params {};
		params.SenseClass = SenseClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIPerceptionStimuliSourceComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIPerceptionStimuliSourceComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AIPerceptionStimuliSourceComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIResource_Movement.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIResource_Movement::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AIResource_Movement");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAIResource_Logic.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAIResource_Logic::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AIResource_Logic");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function AIModule.AISense_Blueprint.OnUpdate
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UAISenseEvent*>                       EventsToProcess                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	float UAISense_Blueprint::OnUpdate(TArray<class UAISenseEvent*> EventsToProcess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AISense_Blueprint.OnUpdate");
		
		UAISense_Blueprint_OnUpdate_Params params {};
		params.EventsToProcess = EventsToProcess;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function AIModule.AISense_Blueprint.OnListenerUpdated
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ActorListener                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAIPerceptionComponent*                      PerceptionComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAISense_Blueprint::OnListenerUpdated(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AISense_Blueprint.OnListenerUpdated");
		
		UAISense_Blueprint_OnListenerUpdated_Params params {};
		params.ActorListener = ActorListener;
		params.PerceptionComponent = PerceptionComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function AIModule.AISense_Blueprint.OnListenerUnregistered
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ActorListener                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAIPerceptionComponent*                      PerceptionComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAISense_Blueprint::OnListenerUnregistered(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AISense_Blueprint.OnListenerUnregistered");
		
		UAISense_Blueprint_OnListenerUnregistered_Params params {};
		params.ActorListener = ActorListener;
		params.PerceptionComponent = PerceptionComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function AIModule.AISense_Blueprint.OnListenerRegistered
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      ActorListener                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAIPerceptionComponent*                      PerceptionComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAISense_Blueprint::OnListenerRegistered(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AISense_Blueprint.OnListenerRegistered");
		
		UAISense_Blueprint_OnListenerRegistered_Params params {};
		params.ActorListener = ActorListener;
		params.PerceptionComponent = PerceptionComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function AIModule.AISense_Blueprint.K2_OnNewPawn
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       NewPawn                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAISense_Blueprint::K2_OnNewPawn(class APawn* NewPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AISense_Blueprint.K2_OnNewPawn");
		
		UAISense_Blueprint_K2_OnNewPawn_Params params {};
		params.NewPawn = NewPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023209E0
	 * 		Name   -> Function AIModule.AISense_Blueprint.GetAllListenerComponents
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		TArray<class UAIPerceptionComponent*>              ListenerComponents                                         (Parm, OutParm, ZeroConstructor, ContainsInstancedReference)
	 */
	void UAISense_Blueprint::GetAllListenerComponents(TArray<class UAIPerceptionComponent*>* ListenerComponents)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AISense_Blueprint.GetAllListenerComponents");
		
		UAISense_Blueprint_GetAllListenerComponents_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ListenerComponents != nullptr)
			*ListenerComponents = params.ListenerComponents;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02320930
	 * 		Name   -> Function AIModule.AISense_Blueprint.GetAllListenerActors
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		TArray<class AActor*>                              ListenerActors                                             (Parm, OutParm, ZeroConstructor)
	 */
	void UAISense_Blueprint::GetAllListenerActors(TArray<class AActor*>* ListenerActors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AISense_Blueprint.GetAllListenerActors");
		
		UAISense_Blueprint_GetAllListenerActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ListenerActors != nullptr)
			*ListenerActors = params.ListenerActors;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISense_Blueprint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISense_Blueprint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AISense_Blueprint");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02323BB0
	 * 		Name   -> Function AIModule.AISense_Damage.ReportDamageEvent
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamagedActor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Instigator                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DamageAmount                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     EventLocation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     HitLocation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	 */
	void UAISense_Damage::STATIC_ReportDamageEvent(class UObject* WorldContext, class AActor* DamagedActor, class AActor* Instigator, float DamageAmount, const struct FVector& EventLocation, const struct FVector& HitLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AISense_Damage.ReportDamageEvent");
		
		UAISense_Damage_ReportDamageEvent_Params params {};
		params.WorldContext = WorldContext;
		params.DamagedActor = DamagedActor;
		params.Instigator = Instigator;
		params.DamageAmount = DamageAmount;
		params.EventLocation = EventLocation;
		params.HitLocation = HitLocation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISense_Damage.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISense_Damage::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AISense_Damage");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02323E00
	 * 		Name   -> Function AIModule.AISense_Hearing.ReportNoiseEvent
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     NoiseLocation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Loudness                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Instigator                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MaxRange                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Tag                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAISense_Hearing::STATIC_ReportNoiseEvent(class UObject* WorldContext, const struct FVector& NoiseLocation, float Loudness, class AActor* Instigator, float MaxRange, const class FName& Tag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AISense_Hearing.ReportNoiseEvent");
		
		UAISense_Hearing_ReportNoiseEvent_Params params {};
		params.WorldContext = WorldContext;
		params.NoiseLocation = NoiseLocation;
		params.Loudness = Loudness;
		params.Instigator = Instigator;
		params.MaxRange = MaxRange;
		params.Tag = Tag;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISense_Hearing.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISense_Hearing::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AISense_Hearing");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02324170
	 * 		Name   -> Function AIModule.AISense_Prediction.RequestPawnPredictionEvent
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class APawn*                                       Requestor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      PredictedActor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              PredictionTime                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAISense_Prediction::STATIC_RequestPawnPredictionEvent(class APawn* Requestor, class AActor* PredictedActor, float PredictionTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AISense_Prediction.RequestPawnPredictionEvent");
		
		UAISense_Prediction_RequestPawnPredictionEvent_Params params {};
		params.Requestor = Requestor;
		params.PredictedActor = PredictedActor;
		params.PredictionTime = PredictionTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02324070
	 * 		Name   -> Function AIModule.AISense_Prediction.RequestControllerPredictionEvent
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AAIController*                               Requestor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      PredictedActor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              PredictionTime                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAISense_Prediction::STATIC_RequestControllerPredictionEvent(class AAIController* Requestor, class AActor* PredictedActor, float PredictionTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AISense_Prediction.RequestControllerPredictionEvent");
		
		UAISense_Prediction_RequestControllerPredictionEvent_Params params {};
		params.Requestor = Requestor;
		params.PredictedActor = PredictedActor;
		params.PredictionTime = PredictionTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISense_Prediction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISense_Prediction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AISense_Prediction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISense_Sight.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISense_Sight::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AISense_Sight");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISense_Team.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISense_Team::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AISense_Team");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISense_Touch.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISense_Touch::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AISense_Touch");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISenseBlueprintListener.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISenseBlueprintListener::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AISenseBlueprintListener");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISenseConfig.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISenseConfig::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AISenseConfig");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISenseConfig_Blueprint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISenseConfig_Blueprint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AISenseConfig_Blueprint");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISenseConfig_Damage.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISenseConfig_Damage::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AISenseConfig_Damage");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISenseConfig_Hearing.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISenseConfig_Hearing::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AISenseConfig_Hearing");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISenseConfig_Prediction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISenseConfig_Prediction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AISenseConfig_Prediction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISenseConfig_Sight.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISenseConfig_Sight::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AISenseConfig_Sight");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISenseConfig_Team.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISenseConfig_Team::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AISenseConfig_Team");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISenseConfig_Touch.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISenseConfig_Touch::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AISenseConfig_Touch");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISenseEvent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISenseEvent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AISenseEvent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISenseEvent_Damage.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISenseEvent_Damage::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AISenseEvent_Damage");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISenseEvent_Hearing.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISenseEvent_Hearing::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AISenseEvent_Hearing");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISightTargetInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISightTargetInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AISightTargetInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAITask.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAITask::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AITask");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0231FB10
	 * 		Name   -> Function AIModule.AITask_MoveTo.AIMoveTo
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class AAIController*                               Controller                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     GoalLocation                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class AActor*                                      GoalActor                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              AcceptanceRadius                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	 * 		EAIOptionFlag                                      StopOnOverlap                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	 * 		EAIOptionFlag                                      AcceptPartialPath                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	 * 		bool                                               bUsePathfinding                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	 * 		bool                                               bLockAILogic                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	class UAITask_MoveTo* UAITask_MoveTo::STATIC_AIMoveTo(class AAIController* Controller, const struct FVector& GoalLocation, class AActor* GoalActor, float AcceptanceRadius, EAIOptionFlag StopOnOverlap, EAIOptionFlag AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.AITask_MoveTo.AIMoveTo");
		
		UAITask_MoveTo_AIMoveTo_Params params {};
		params.Controller = Controller;
		params.GoalLocation = GoalLocation;
		params.GoalActor = GoalActor;
		params.AcceptanceRadius = AcceptanceRadius;
		params.StopOnOverlap = StopOnOverlap;
		params.AcceptPartialPath = AcceptPartialPath;
		params.bUsePathfinding = bUsePathfinding;
		params.bLockAILogic = bLockAILogic;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAITask_MoveTo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAITask_MoveTo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.AITask_MoveTo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02326230
	 * 		Name   -> Function AIModule.BrainComponent.StopLogic
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Reason                                                     (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBrainComponent::StopLogic(const class FString& Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BrainComponent.StopLogic");
		
		UBrainComponent_StopLogic_Params params {};
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02324290
	 * 		Name   -> Function AIModule.BrainComponent.RestartLogic
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UBrainComponent::RestartLogic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BrainComponent.RestartLogic");
		
		UBrainComponent_RestartLogic_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBrainComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBrainComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BrainComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023252F0
	 * 		Name   -> Function AIModule.BehaviorTreeComponent.SetDynamicSubtree
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FGameplayTag                                InjectTag                                                  (Parm)
	 * 		class UBehaviorTree*                               BehaviorAsset                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBehaviorTreeComponent::SetDynamicSubtree(const struct FGameplayTag& InjectTag, class UBehaviorTree* BehaviorAsset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BehaviorTreeComponent.SetDynamicSubtree");
		
		UBehaviorTreeComponent_SetDynamicSubtree_Params params {};
		params.InjectTag = InjectTag;
		params.BehaviorAsset = BehaviorAsset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023220B0
	 * 		Name   -> Function AIModule.BehaviorTreeComponent.GetTagCooldownEndTime
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FGameplayTag                                CooldownTag                                                (Parm)
	 */
	float UBehaviorTreeComponent::GetTagCooldownEndTime(const struct FGameplayTag& CooldownTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BehaviorTreeComponent.GetTagCooldownEndTime");
		
		UBehaviorTreeComponent_GetTagCooldownEndTime_Params params {};
		params.CooldownTag = CooldownTag;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0231FD50
	 * 		Name   -> Function AIModule.BehaviorTreeComponent.AddCooldownTagDuration
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		struct FGameplayTag                                CooldownTag                                                (Parm)
	 * 		float                                              CoolDownDuration                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bAddToExistingDuration                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBehaviorTreeComponent::AddCooldownTagDuration(const struct FGameplayTag& CooldownTag, float CoolDownDuration, bool bAddToExistingDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BehaviorTreeComponent.AddCooldownTagDuration");
		
		UBehaviorTreeComponent_AddCooldownTagDuration_Params params {};
		params.CooldownTag = CooldownTag;
		params.CoolDownDuration = CoolDownDuration;
		params.bAddToExistingDuration = bAddToExistingDuration;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBehaviorTreeComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBehaviorTreeComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BehaviorTreeComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTCompositeNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTCompositeNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTCompositeNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBehaviorTree.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBehaviorTree::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BehaviorTree");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBehaviorTreeManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBehaviorTreeManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BehaviorTreeManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBlackboardKeyType_Enum.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlackboardKeyType_Enum::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Enum");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBlackboardKeyType_NativeEnum.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlackboardKeyType_NativeEnum::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_NativeEnum");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBlackboardData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlackboardData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BlackboardData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02325EC0
	 * 		Name   -> Function AIModule.BlackboardComponent.SetValueAsVector
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        KeyName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     VectorValue                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBlackboardComponent::SetValueAsVector(const class FName& KeyName, const struct FVector& VectorValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsVector");
		
		UBlackboardComponent_SetValueAsVector_Params params {};
		params.KeyName = KeyName;
		params.VectorValue = VectorValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02325DC0
	 * 		Name   -> Function AIModule.BlackboardComponent.SetValueAsString
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        KeyName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      StringValue                                                (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBlackboardComponent::SetValueAsString(const class FName& KeyName, const class FString& StringValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsString");
		
		UBlackboardComponent_SetValueAsString_Params params {};
		params.KeyName = KeyName;
		params.StringValue = StringValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02325CD0
	 * 		Name   -> Function AIModule.BlackboardComponent.SetValueAsRotator
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        KeyName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    VectorValue                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBlackboardComponent::SetValueAsRotator(const class FName& KeyName, const struct FRotator& VectorValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsRotator");
		
		UBlackboardComponent_SetValueAsRotator_Params params {};
		params.KeyName = KeyName;
		params.VectorValue = VectorValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02325C00
	 * 		Name   -> Function AIModule.BlackboardComponent.SetValueAsObject
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        KeyName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     ObjectValue                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBlackboardComponent::SetValueAsObject(const class FName& KeyName, class UObject* ObjectValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsObject");
		
		UBlackboardComponent_SetValueAsObject_Params params {};
		params.KeyName = KeyName;
		params.ObjectValue = ObjectValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02325B30
	 * 		Name   -> Function AIModule.BlackboardComponent.SetValueAsName
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        KeyName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        NameValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBlackboardComponent::SetValueAsName(const class FName& KeyName, const class FName& NameValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsName");
		
		UBlackboardComponent_SetValueAsName_Params params {};
		params.KeyName = KeyName;
		params.NameValue = NameValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02325A60
	 * 		Name   -> Function AIModule.BlackboardComponent.SetValueAsInt
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        KeyName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            IntValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBlackboardComponent::SetValueAsInt(const class FName& KeyName, int32_t IntValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsInt");
		
		UBlackboardComponent_SetValueAsInt_Params params {};
		params.KeyName = KeyName;
		params.IntValue = IntValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02325990
	 * 		Name   -> Function AIModule.BlackboardComponent.SetValueAsFloat
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        KeyName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              FloatValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBlackboardComponent::SetValueAsFloat(const class FName& KeyName, float FloatValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsFloat");
		
		UBlackboardComponent_SetValueAsFloat_Params params {};
		params.KeyName = KeyName;
		params.FloatValue = FloatValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023258C0
	 * 		Name   -> Function AIModule.BlackboardComponent.SetValueAsEnum
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        KeyName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      EnumValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBlackboardComponent::SetValueAsEnum(const class FName& KeyName, unsigned char EnumValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsEnum");
		
		UBlackboardComponent_SetValueAsEnum_Params params {};
		params.KeyName = KeyName;
		params.EnumValue = EnumValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023257F0
	 * 		Name   -> Function AIModule.BlackboardComponent.SetValueAsClass
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        KeyName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      ClassValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBlackboardComponent::SetValueAsClass(const class FName& KeyName, class UClass* ClassValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsClass");
		
		UBlackboardComponent_SetValueAsClass_Params params {};
		params.KeyName = KeyName;
		params.ClassValue = ClassValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02325720
	 * 		Name   -> Function AIModule.BlackboardComponent.SetValueAsBool
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        KeyName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               BoolValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBlackboardComponent::SetValueAsBool(const class FName& KeyName, bool BoolValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.SetValueAsBool");
		
		UBlackboardComponent_SetValueAsBool_Params params {};
		params.KeyName = KeyName;
		params.BoolValue = BoolValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02322B60
	 * 		Name   -> Function AIModule.BlackboardComponent.IsVectorValueSet
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        KeyName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBlackboardComponent::IsVectorValueSet(const class FName& KeyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.IsVectorValueSet");
		
		UBlackboardComponent_IsVectorValueSet_Params params {};
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02322750
	 * 		Name   -> Function AIModule.BlackboardComponent.GetValueAsVector
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        KeyName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FVector UBlackboardComponent::GetValueAsVector(const class FName& KeyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsVector");
		
		UBlackboardComponent_GetValueAsVector_Params params {};
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02322650
	 * 		Name   -> Function AIModule.BlackboardComponent.GetValueAsString
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        KeyName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FString UBlackboardComponent::GetValueAsString(const class FName& KeyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsString");
		
		UBlackboardComponent_GetValueAsString_Params params {};
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023225A0
	 * 		Name   -> Function AIModule.BlackboardComponent.GetValueAsRotator
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        KeyName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	struct FRotator UBlackboardComponent::GetValueAsRotator(const class FName& KeyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsRotator");
		
		UBlackboardComponent_GetValueAsRotator_Params params {};
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02322500
	 * 		Name   -> Function AIModule.BlackboardComponent.GetValueAsObject
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        KeyName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UObject* UBlackboardComponent::GetValueAsObject(const class FName& KeyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsObject");
		
		UBlackboardComponent_GetValueAsObject_Params params {};
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02322460
	 * 		Name   -> Function AIModule.BlackboardComponent.GetValueAsName
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        KeyName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FName UBlackboardComponent::GetValueAsName(const class FName& KeyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsName");
		
		UBlackboardComponent_GetValueAsName_Params params {};
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023223C0
	 * 		Name   -> Function AIModule.BlackboardComponent.GetValueAsInt
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        KeyName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	int32_t UBlackboardComponent::GetValueAsInt(const class FName& KeyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsInt");
		
		UBlackboardComponent_GetValueAsInt_Params params {};
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02322320
	 * 		Name   -> Function AIModule.BlackboardComponent.GetValueAsFloat
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        KeyName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float UBlackboardComponent::GetValueAsFloat(const class FName& KeyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsFloat");
		
		UBlackboardComponent_GetValueAsFloat_Params params {};
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02322280
	 * 		Name   -> Function AIModule.BlackboardComponent.GetValueAsEnum
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        KeyName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	unsigned char UBlackboardComponent::GetValueAsEnum(const class FName& KeyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsEnum");
		
		UBlackboardComponent_GetValueAsEnum_Params params {};
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023221E0
	 * 		Name   -> Function AIModule.BlackboardComponent.GetValueAsClass
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        KeyName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UClass* UBlackboardComponent::GetValueAsClass(const class FName& KeyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsClass");
		
		UBlackboardComponent_GetValueAsClass_Params params {};
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02322140
	 * 		Name   -> Function AIModule.BlackboardComponent.GetValueAsBool
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        KeyName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBlackboardComponent::GetValueAsBool(const class FName& KeyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetValueAsBool");
		
		UBlackboardComponent_GetValueAsBool_Params params {};
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02321E90
	 * 		Name   -> Function AIModule.BlackboardComponent.GetRotationFromEntry
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        KeyName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    ResultRotation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UBlackboardComponent::GetRotationFromEntry(const class FName& KeyName, struct FRotator* ResultRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetRotationFromEntry");
		
		UBlackboardComponent_GetRotationFromEntry_Params params {};
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ResultRotation != nullptr)
			*ResultRotation = params.ResultRotation;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02321880
	 * 		Name   -> Function AIModule.BlackboardComponent.GetLocationFromEntry
	 * 		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FName                                        KeyName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     ResultLocation                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	bool UBlackboardComponent::GetLocationFromEntry(const class FName& KeyName, struct FVector* ResultLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.GetLocationFromEntry");
		
		UBlackboardComponent_GetLocationFromEntry_Params params {};
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ResultLocation != nullptr)
			*ResultLocation = params.ResultLocation;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02320270
	 * 		Name   -> Function AIModule.BlackboardComponent.ClearValueAsVector
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        KeyName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBlackboardComponent::ClearValueAsVector(const class FName& KeyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.ClearValueAsVector");
		
		UBlackboardComponent_ClearValueAsVector_Params params {};
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023201E0
	 * 		Name   -> Function AIModule.BlackboardComponent.ClearValueAsRotator
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        KeyName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBlackboardComponent::ClearValueAsRotator(const class FName& KeyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.ClearValueAsRotator");
		
		UBlackboardComponent_ClearValueAsRotator_Params params {};
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02320150
	 * 		Name   -> Function AIModule.BlackboardComponent.ClearValue
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        KeyName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBlackboardComponent::ClearValue(const class FName& KeyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BlackboardComponent.ClearValue");
		
		UBlackboardComponent_ClearValue_Params params {};
		params.KeyName = KeyName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBlackboardComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlackboardComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BlackboardComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBlackboardKeyType_Bool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlackboardKeyType_Bool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Bool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBlackboardKeyType_Class.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlackboardKeyType_Class::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Class");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBlackboardKeyType_Float.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlackboardKeyType_Float::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Float");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBlackboardKeyType_Int.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlackboardKeyType_Int::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Int");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBlackboardKeyType_Name.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlackboardKeyType_Name::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Name");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBlackboardKeyType_Object.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlackboardKeyType_Object::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Object");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBlackboardKeyType_Rotator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlackboardKeyType_Rotator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Rotator");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBlackboardKeyType_String.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlackboardKeyType_String::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_String");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBlackboardKeyType_Vector.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlackboardKeyType_Vector::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BlackboardKeyType_Vector");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023262E0
	 * 		Name   -> Function AIModule.BTFunctionLibrary.StopUsingExternalEvent
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UBTNode*                                     NodeOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTFunctionLibrary::STATIC_StopUsingExternalEvent(class UBTNode* NodeOwner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.StopUsingExternalEvent");
		
		UBTFunctionLibrary_StopUsingExternalEvent_Params params {};
		params.NodeOwner = NodeOwner;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02326180
	 * 		Name   -> Function AIModule.BTFunctionLibrary.StartUsingExternalEvent
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UBTNode*                                     NodeOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OwningActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTFunctionLibrary::STATIC_StartUsingExternalEvent(class UBTNode* NodeOwner, class AActor* OwningActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.StartUsingExternalEvent");
		
		UBTFunctionLibrary_StartUsingExternalEvent_Params params {};
		params.NodeOwner = NodeOwner;
		params.OwningActor = OwningActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02325190
	 * 		Name   -> Function AIModule.BTFunctionLibrary.SetBlackboardValueAsVector
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UBTNode*                                     NodeOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBlackboardKeySelector                      Key                                                        (ConstParm, Parm, OutParm, ReferenceParm)
	 * 		struct FVector                                     Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBTFunctionLibrary::STATIC_SetBlackboardValueAsVector(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FVector& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsVector");
		
		UBTFunctionLibrary_SetBlackboardValueAsVector_Params params {};
		params.NodeOwner = NodeOwner;
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02325030
	 * 		Name   -> Function AIModule.BTFunctionLibrary.SetBlackboardValueAsString
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UBTNode*                                     NodeOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBlackboardKeySelector                      Key                                                        (ConstParm, Parm, OutParm, ReferenceParm)
	 * 		class FString                                      Value                                                      (Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBTFunctionLibrary::STATIC_SetBlackboardValueAsString(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const class FString& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsString");
		
		UBTFunctionLibrary_SetBlackboardValueAsString_Params params {};
		params.NodeOwner = NodeOwner;
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02324ED0
	 * 		Name   -> Function AIModule.BTFunctionLibrary.SetBlackboardValueAsRotator
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UBTNode*                                     NodeOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBlackboardKeySelector                      Key                                                        (ConstParm, Parm, OutParm, ReferenceParm)
	 * 		struct FRotator                                    Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBTFunctionLibrary::STATIC_SetBlackboardValueAsRotator(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const struct FRotator& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsRotator");
		
		UBTFunctionLibrary_SetBlackboardValueAsRotator_Params params {};
		params.NodeOwner = NodeOwner;
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02324D90
	 * 		Name   -> Function AIModule.BTFunctionLibrary.SetBlackboardValueAsObject
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UBTNode*                                     NodeOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBlackboardKeySelector                      Key                                                        (ConstParm, Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTFunctionLibrary::STATIC_SetBlackboardValueAsObject(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, class UObject* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsObject");
		
		UBTFunctionLibrary_SetBlackboardValueAsObject_Params params {};
		params.NodeOwner = NodeOwner;
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02324C50
	 * 		Name   -> Function AIModule.BTFunctionLibrary.SetBlackboardValueAsName
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UBTNode*                                     NodeOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBlackboardKeySelector                      Key                                                        (ConstParm, Parm, OutParm, ReferenceParm)
	 * 		class FName                                        Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTFunctionLibrary::STATIC_SetBlackboardValueAsName(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, const class FName& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsName");
		
		UBTFunctionLibrary_SetBlackboardValueAsName_Params params {};
		params.NodeOwner = NodeOwner;
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02324B10
	 * 		Name   -> Function AIModule.BTFunctionLibrary.SetBlackboardValueAsInt
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UBTNode*                                     NodeOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBlackboardKeySelector                      Key                                                        (ConstParm, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTFunctionLibrary::STATIC_SetBlackboardValueAsInt(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsInt");
		
		UBTFunctionLibrary_SetBlackboardValueAsInt_Params params {};
		params.NodeOwner = NodeOwner;
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023249D0
	 * 		Name   -> Function AIModule.BTFunctionLibrary.SetBlackboardValueAsFloat
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UBTNode*                                     NodeOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBlackboardKeySelector                      Key                                                        (ConstParm, Parm, OutParm, ReferenceParm)
	 * 		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTFunctionLibrary::STATIC_SetBlackboardValueAsFloat(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsFloat");
		
		UBTFunctionLibrary_SetBlackboardValueAsFloat_Params params {};
		params.NodeOwner = NodeOwner;
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02324890
	 * 		Name   -> Function AIModule.BTFunctionLibrary.SetBlackboardValueAsEnum
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UBTNode*                                     NodeOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBlackboardKeySelector                      Key                                                        (ConstParm, Parm, OutParm, ReferenceParm)
	 * 		unsigned char                                      Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTFunctionLibrary::STATIC_SetBlackboardValueAsEnum(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, unsigned char Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsEnum");
		
		UBTFunctionLibrary_SetBlackboardValueAsEnum_Params params {};
		params.NodeOwner = NodeOwner;
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02324750
	 * 		Name   -> Function AIModule.BTFunctionLibrary.SetBlackboardValueAsClass
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UBTNode*                                     NodeOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBlackboardKeySelector                      Key                                                        (ConstParm, Parm, OutParm, ReferenceParm)
	 * 		class UClass*                                      Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTFunctionLibrary::STATIC_SetBlackboardValueAsClass(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, class UClass* Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsClass");
		
		UBTFunctionLibrary_SetBlackboardValueAsClass_Params params {};
		params.NodeOwner = NodeOwner;
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02324610
	 * 		Name   -> Function AIModule.BTFunctionLibrary.SetBlackboardValueAsBool
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UBTNode*                                     NodeOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBlackboardKeySelector                      Key                                                        (ConstParm, Parm, OutParm, ReferenceParm)
	 * 		bool                                               Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBTFunctionLibrary::STATIC_SetBlackboardValueAsBool(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key, bool Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.SetBlackboardValueAsBool");
		
		UBTFunctionLibrary_SetBlackboardValueAsBool_Params params {};
		params.NodeOwner = NodeOwner;
		params.Key = Key;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02321A20
	 * 		Name   -> Function AIModule.BTFunctionLibrary.GetOwnersBlackboard
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UBTNode*                                     NodeOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UBlackboardComponent* UBTFunctionLibrary::STATIC_GetOwnersBlackboard(class UBTNode* NodeOwner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetOwnersBlackboard");
		
		UBTFunctionLibrary_GetOwnersBlackboard_Params params {};
		params.NodeOwner = NodeOwner;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023219A0
	 * 		Name   -> Function AIModule.BTFunctionLibrary.GetOwnerComponent
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UBTNode*                                     NodeOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class UBehaviorTreeComponent* UBTFunctionLibrary::STATIC_GetOwnerComponent(class UBTNode* NodeOwner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetOwnerComponent");
		
		UBTFunctionLibrary_GetOwnerComponent_Params params {};
		params.NodeOwner = NodeOwner;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02321580
	 * 		Name   -> Function AIModule.BTFunctionLibrary.GetBlackboardValueAsVector
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UBTNode*                                     NodeOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBlackboardKeySelector                      Key                                                        (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	struct FVector UBTFunctionLibrary::STATIC_GetBlackboardValueAsVector(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsVector");
		
		UBTFunctionLibrary_GetBlackboardValueAsVector_Params params {};
		params.NodeOwner = NodeOwner;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02321430
	 * 		Name   -> Function AIModule.BTFunctionLibrary.GetBlackboardValueAsString
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UBTNode*                                     NodeOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBlackboardKeySelector                      Key                                                        (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	class FString UBTFunctionLibrary::STATIC_GetBlackboardValueAsString(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsString");
		
		UBTFunctionLibrary_GetBlackboardValueAsString_Params params {};
		params.NodeOwner = NodeOwner;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02321320
	 * 		Name   -> Function AIModule.BTFunctionLibrary.GetBlackboardValueAsRotator
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UBTNode*                                     NodeOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBlackboardKeySelector                      Key                                                        (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	struct FRotator UBTFunctionLibrary::STATIC_GetBlackboardValueAsRotator(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsRotator");
		
		UBTFunctionLibrary_GetBlackboardValueAsRotator_Params params {};
		params.NodeOwner = NodeOwner;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02321220
	 * 		Name   -> Function AIModule.BTFunctionLibrary.GetBlackboardValueAsObject
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UBTNode*                                     NodeOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBlackboardKeySelector                      Key                                                        (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	class UObject* UBTFunctionLibrary::STATIC_GetBlackboardValueAsObject(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsObject");
		
		UBTFunctionLibrary_GetBlackboardValueAsObject_Params params {};
		params.NodeOwner = NodeOwner;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02321110
	 * 		Name   -> Function AIModule.BTFunctionLibrary.GetBlackboardValueAsName
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UBTNode*                                     NodeOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBlackboardKeySelector                      Key                                                        (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	class FName UBTFunctionLibrary::STATIC_GetBlackboardValueAsName(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsName");
		
		UBTFunctionLibrary_GetBlackboardValueAsName_Params params {};
		params.NodeOwner = NodeOwner;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02321010
	 * 		Name   -> Function AIModule.BTFunctionLibrary.GetBlackboardValueAsInt
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UBTNode*                                     NodeOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBlackboardKeySelector                      Key                                                        (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	int32_t UBTFunctionLibrary::STATIC_GetBlackboardValueAsInt(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsInt");
		
		UBTFunctionLibrary_GetBlackboardValueAsInt_Params params {};
		params.NodeOwner = NodeOwner;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02320F10
	 * 		Name   -> Function AIModule.BTFunctionLibrary.GetBlackboardValueAsFloat
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UBTNode*                                     NodeOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBlackboardKeySelector                      Key                                                        (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	float UBTFunctionLibrary::STATIC_GetBlackboardValueAsFloat(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsFloat");
		
		UBTFunctionLibrary_GetBlackboardValueAsFloat_Params params {};
		params.NodeOwner = NodeOwner;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02320E10
	 * 		Name   -> Function AIModule.BTFunctionLibrary.GetBlackboardValueAsEnum
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UBTNode*                                     NodeOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBlackboardKeySelector                      Key                                                        (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	unsigned char UBTFunctionLibrary::STATIC_GetBlackboardValueAsEnum(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsEnum");
		
		UBTFunctionLibrary_GetBlackboardValueAsEnum_Params params {};
		params.NodeOwner = NodeOwner;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02320D10
	 * 		Name   -> Function AIModule.BTFunctionLibrary.GetBlackboardValueAsClass
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UBTNode*                                     NodeOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBlackboardKeySelector                      Key                                                        (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	class UClass* UBTFunctionLibrary::STATIC_GetBlackboardValueAsClass(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsClass");
		
		UBTFunctionLibrary_GetBlackboardValueAsClass_Params params {};
		params.NodeOwner = NodeOwner;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02320C10
	 * 		Name   -> Function AIModule.BTFunctionLibrary.GetBlackboardValueAsBool
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UBTNode*                                     NodeOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBlackboardKeySelector                      Key                                                        (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	bool UBTFunctionLibrary::STATIC_GetBlackboardValueAsBool(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsBool");
		
		UBTFunctionLibrary_GetBlackboardValueAsBool_Params params {};
		params.NodeOwner = NodeOwner;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02320B10
	 * 		Name   -> Function AIModule.BTFunctionLibrary.GetBlackboardValueAsActor
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UBTNode*                                     NodeOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBlackboardKeySelector                      Key                                                        (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	class AActor* UBTFunctionLibrary::STATIC_GetBlackboardValueAsActor(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.GetBlackboardValueAsActor");
		
		UBTFunctionLibrary_GetBlackboardValueAsActor_Params params {};
		params.NodeOwner = NodeOwner;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02320060
	 * 		Name   -> Function AIModule.BTFunctionLibrary.ClearBlackboardValueAsVector
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UBTNode*                                     NodeOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBlackboardKeySelector                      Key                                                        (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void UBTFunctionLibrary::STATIC_ClearBlackboardValueAsVector(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.ClearBlackboardValueAsVector");
		
		UBTFunctionLibrary_ClearBlackboardValueAsVector_Params params {};
		params.NodeOwner = NodeOwner;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0231FF70
	 * 		Name   -> Function AIModule.BTFunctionLibrary.ClearBlackboardValue
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UBTNode*                                     NodeOwner                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FBlackboardKeySelector                      Key                                                        (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void UBTFunctionLibrary::STATIC_ClearBlackboardValue(class UBTNode* NodeOwner, const struct FBlackboardKeySelector& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTFunctionLibrary.ClearBlackboardValue");
		
		UBTFunctionLibrary_ClearBlackboardValue_Params params {};
		params.NodeOwner = NodeOwner;
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_Blackboard.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_Blackboard::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTDecorator_Blackboard");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_ConditionalLoop.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_ConditionalLoop::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTDecorator_ConditionalLoop");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_IsAtLocation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_IsAtLocation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTDecorator_IsAtLocation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_IsBBEntryOfClass.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_IsBBEntryOfClass::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTDecorator_IsBBEntryOfClass");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function AIModule.BTDecorator_BlueprintBase.ReceiveTickAI
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTDecorator_BlueprintBase::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveTickAI");
		
		UBTDecorator_BlueprintBase_ReceiveTickAI_Params params {};
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function AIModule.BTDecorator_BlueprintBase.ReceiveTick
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTDecorator_BlueprintBase::ReceiveTick(class AActor* OwnerActor, float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveTick");
		
		UBTDecorator_BlueprintBase_ReceiveTick_Params params {};
		params.OwnerActor = OwnerActor;
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivatedAI
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTDecorator_BlueprintBase::ReceiveObserverDeactivatedAI(class AAIController* OwnerController, class APawn* ControlledPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivatedAI");
		
		UBTDecorator_BlueprintBase_ReceiveObserverDeactivatedAI_Params params {};
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTDecorator_BlueprintBase::ReceiveObserverDeactivated(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivated");
		
		UBTDecorator_BlueprintBase_ReceiveObserverDeactivated_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivatedAI
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTDecorator_BlueprintBase::ReceiveObserverActivatedAI(class AAIController* OwnerController, class APawn* ControlledPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivatedAI");
		
		UBTDecorator_BlueprintBase_ReceiveObserverActivatedAI_Params params {};
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivated
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTDecorator_BlueprintBase::ReceiveObserverActivated(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivated");
		
		UBTDecorator_BlueprintBase_ReceiveObserverActivated_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStartAI
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTDecorator_BlueprintBase::ReceiveExecutionStartAI(class AAIController* OwnerController, class APawn* ControlledPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStartAI");
		
		UBTDecorator_BlueprintBase_ReceiveExecutionStartAI_Params params {};
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStart
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTDecorator_BlueprintBase::ReceiveExecutionStart(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStart");
		
		UBTDecorator_BlueprintBase_ReceiveExecutionStart_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinishAI
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EBTNodeResult                                      NodeResult                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTDecorator_BlueprintBase::ReceiveExecutionFinishAI(class AAIController* OwnerController, class APawn* ControlledPawn, EBTNodeResult NodeResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinishAI");
		
		UBTDecorator_BlueprintBase_ReceiveExecutionFinishAI_Params params {};
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		params.NodeResult = NodeResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinish
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EBTNodeResult                                      NodeResult                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTDecorator_BlueprintBase::ReceiveExecutionFinish(class AActor* OwnerActor, EBTNodeResult NodeResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinish");
		
		UBTDecorator_BlueprintBase_ReceiveExecutionFinish_Params params {};
		params.OwnerActor = OwnerActor;
		params.NodeResult = NodeResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function AIModule.BTDecorator_BlueprintBase.ReceiveConditionCheck
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTDecorator_BlueprintBase::ReceiveConditionCheck(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.ReceiveConditionCheck");
		
		UBTDecorator_BlueprintBase_ReceiveConditionCheck_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheckAI
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBTDecorator_BlueprintBase::PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheckAI");
		
		UBTDecorator_BlueprintBase_PerformConditionCheckAI_Params params {};
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheck
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UBTDecorator_BlueprintBase::PerformConditionCheck(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheck");
		
		UBTDecorator_BlueprintBase_PerformConditionCheck_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02322860
	 * 		Name   -> Function AIModule.BTDecorator_BlueprintBase.IsDecoratorObserverActive
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UBTDecorator_BlueprintBase::IsDecoratorObserverActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.IsDecoratorObserverActive");
		
		UBTDecorator_BlueprintBase_IsDecoratorObserverActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02322830
	 * 		Name   -> Function AIModule.BTDecorator_BlueprintBase.IsDecoratorExecutionActive
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UBTDecorator_BlueprintBase::IsDecoratorExecutionActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.IsDecoratorExecutionActive");
		
		UBTDecorator_BlueprintBase_IsDecoratorExecutionActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02320630
	 * 		Name   -> Function AIModule.BTDecorator_BlueprintBase.FinishConditionCheck
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bAllowExecution                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBTDecorator_BlueprintBase::FinishConditionCheck(bool bAllowExecution)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTDecorator_BlueprintBase.FinishConditionCheck");
		
		UBTDecorator_BlueprintBase_FinishConditionCheck_Params params {};
		params.bAllowExecution = bAllowExecution;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_BlueprintBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_BlueprintBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTDecorator_BlueprintBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_CheckGameplayTagsOnActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_CheckGameplayTagsOnActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTDecorator_CheckGameplayTagsOnActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_CompareBBEntries.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_CompareBBEntries::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTDecorator_CompareBBEntries");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_ConeCheck.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_ConeCheck::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTDecorator_ConeCheck");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_Cooldown.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_Cooldown::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTDecorator_Cooldown");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_DoesPathExist.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_DoesPathExist::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTDecorator_DoesPathExist");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_ForceSuccess.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_ForceSuccess::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTDecorator_ForceSuccess");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_KeepInCone.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_KeepInCone::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTDecorator_KeepInCone");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_Loop.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_Loop::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTDecorator_Loop");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_ReachedMoveGoal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_ReachedMoveGoal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTDecorator_ReachedMoveGoal");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_SetTagCooldown.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_SetTagCooldown::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTDecorator_SetTagCooldown");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_TagCooldown.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_TagCooldown::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTDecorator_TagCooldown");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTDecorator_TimeLimit.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTDecorator_TimeLimit::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTDecorator_TimeLimit");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService_BlackboardBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_BlackboardBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTService_BlackboardBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService_DefaultFocus.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_DefaultFocus::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTService_DefaultFocus");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function AIModule.BTService_BlueprintBase.ReceiveTickAI
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTService_BlueprintBase::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.ReceiveTickAI");
		
		UBTService_BlueprintBase_ReceiveTickAI_Params params {};
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function AIModule.BTService_BlueprintBase.ReceiveTick
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTService_BlueprintBase::ReceiveTick(class AActor* OwnerActor, float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.ReceiveTick");
		
		UBTService_BlueprintBase_ReceiveTick_Params params {};
		params.OwnerActor = OwnerActor;
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function AIModule.BTService_BlueprintBase.ReceiveSearchStartAI
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTService_BlueprintBase::ReceiveSearchStartAI(class AAIController* OwnerController, class APawn* ControlledPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.ReceiveSearchStartAI");
		
		UBTService_BlueprintBase_ReceiveSearchStartAI_Params params {};
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function AIModule.BTService_BlueprintBase.ReceiveSearchStart
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTService_BlueprintBase::ReceiveSearchStart(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.ReceiveSearchStart");
		
		UBTService_BlueprintBase_ReceiveSearchStart_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function AIModule.BTService_BlueprintBase.ReceiveDeactivationAI
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTService_BlueprintBase::ReceiveDeactivationAI(class AAIController* OwnerController, class APawn* ControlledPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.ReceiveDeactivationAI");
		
		UBTService_BlueprintBase_ReceiveDeactivationAI_Params params {};
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function AIModule.BTService_BlueprintBase.ReceiveDeactivation
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTService_BlueprintBase::ReceiveDeactivation(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.ReceiveDeactivation");
		
		UBTService_BlueprintBase_ReceiveDeactivation_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function AIModule.BTService_BlueprintBase.ReceiveActivationAI
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTService_BlueprintBase::ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.ReceiveActivationAI");
		
		UBTService_BlueprintBase_ReceiveActivationAI_Params params {};
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function AIModule.BTService_BlueprintBase.ReceiveActivation
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTService_BlueprintBase::ReceiveActivation(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.ReceiveActivation");
		
		UBTService_BlueprintBase_ReceiveActivation_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02322920
	 * 		Name   -> Function AIModule.BTService_BlueprintBase.IsServiceActive
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UBTService_BlueprintBase::IsServiceActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTService_BlueprintBase.IsServiceActive");
		
		UBTService_BlueprintBase_IsServiceActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTService_BlueprintBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTService_BlueprintBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTService_BlueprintBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTComposite_Selector.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTComposite_Selector::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTComposite_Selector");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTComposite_Sequence.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTComposite_Sequence::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTComposite_Sequence");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTComposite_SimpleParallel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTComposite_SimpleParallel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTComposite_SimpleParallel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_MoveDirectlyToward.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_MoveDirectlyToward::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTTask_MoveDirectlyToward");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_MoveTo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_MoveTo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTTask_MoveTo");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryItemType.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryItemType::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryItemType");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryTypes.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryTypes::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryTypes");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02325440
	 * 		Name   -> Function AIModule.BTTask_BlueprintBase.SetFinishOnMessageWithId
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        MessageName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            RequestID                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTTask_BlueprintBase::SetFinishOnMessageWithId(const class FName& MessageName, int32_t RequestID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.SetFinishOnMessageWithId");
		
		UBTTask_BlueprintBase_SetFinishOnMessageWithId_Params params {};
		params.MessageName = MessageName;
		params.RequestID = RequestID;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023253C0
	 * 		Name   -> Function AIModule.BTTask_BlueprintBase.SetFinishOnMessage
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        MessageName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTTask_BlueprintBase::SetFinishOnMessage(const class FName& MessageName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.SetFinishOnMessage");
		
		UBTTask_BlueprintBase_SetFinishOnMessage_Params params {};
		params.MessageName = MessageName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function AIModule.BTTask_BlueprintBase.ReceiveTickAI
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTTask_BlueprintBase::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.ReceiveTickAI");
		
		UBTTask_BlueprintBase_ReceiveTickAI_Params params {};
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function AIModule.BTTask_BlueprintBase.ReceiveTick
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTTask_BlueprintBase::ReceiveTick(class AActor* OwnerActor, float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.ReceiveTick");
		
		UBTTask_BlueprintBase_ReceiveTick_Params params {};
		params.OwnerActor = OwnerActor;
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function AIModule.BTTask_BlueprintBase.ReceiveExecuteAI
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTTask_BlueprintBase::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.ReceiveExecuteAI");
		
		UBTTask_BlueprintBase_ReceiveExecuteAI_Params params {};
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function AIModule.BTTask_BlueprintBase.ReceiveExecute
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTTask_BlueprintBase::ReceiveExecute(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.ReceiveExecute");
		
		UBTTask_BlueprintBase_ReceiveExecute_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function AIModule.BTTask_BlueprintBase.ReceiveAbortAI
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTTask_BlueprintBase::ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.ReceiveAbortAI");
		
		UBTTask_BlueprintBase_ReceiveAbortAI_Params params {};
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function AIModule.BTTask_BlueprintBase.ReceiveAbort
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTTask_BlueprintBase::ReceiveAbort(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.ReceiveAbort");
		
		UBTTask_BlueprintBase_ReceiveAbort_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02322980
	 * 		Name   -> Function AIModule.BTTask_BlueprintBase.IsTaskExecuting
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UBTTask_BlueprintBase::IsTaskExecuting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.IsTaskExecuting");
		
		UBTTask_BlueprintBase_IsTaskExecuting_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02322950
	 * 		Name   -> Function AIModule.BTTask_BlueprintBase.IsTaskAborting
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UBTTask_BlueprintBase::IsTaskAborting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.IsTaskAborting");
		
		UBTTask_BlueprintBase_IsTaskAborting_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023206C0
	 * 		Name   -> Function AIModule.BTTask_BlueprintBase.FinishExecute
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bSuccess                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBTTask_BlueprintBase::FinishExecute(bool bSuccess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.FinishExecute");
		
		UBTTask_BlueprintBase_FinishExecute_Params params {};
		params.bSuccess = bSuccess;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02320610
	 * 		Name   -> Function AIModule.BTTask_BlueprintBase.FinishAbort
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void UBTTask_BlueprintBase::FinishAbort()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.BTTask_BlueprintBase.FinishAbort");
		
		UBTTask_BlueprintBase_FinishAbort_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_BlueprintBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_BlueprintBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTTask_BlueprintBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_MakeNoise.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_MakeNoise::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTTask_MakeNoise");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02320800
	 * 		Name   -> Function AIModule.PawnAction.GetActionPriority
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	EAIRequestPriority UPawnAction::GetActionPriority()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.PawnAction.GetActionPriority");
		
		UPawnAction_GetActionPriority_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02320580
	 * 		Name   -> Function AIModule.PawnAction.Finish
	 * 		Flags  -> (Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		EPawnActionResult                                  WithResult                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPawnAction::Finish(EPawnActionResult WithResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.PawnAction.Finish");
		
		UPawnAction_Finish_Params params {};
		params.WithResult = WithResult;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02320300
	 * 		Name   -> Function AIModule.PawnAction.CreateActionInstance
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      ActionClass                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	class UPawnAction* UPawnAction::STATIC_CreateActionInstance(class UObject* WorldContextObject, class UClass* ActionClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.PawnAction.CreateActionInstance");
		
		UPawnAction_CreateActionInstance_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.ActionClass = ActionClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPawnAction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPawnAction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.PawnAction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_PawnActionBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_PawnActionBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTTask_PawnActionBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_PushPawnAction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_PushPawnAction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTTask_PushPawnAction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_PlayAnimation.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_PlayAnimation::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTTask_PlayAnimation");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_PlaySound.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_PlaySound::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTTask_PlaySound");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_RunBehavior.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_RunBehavior::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTTask_RunBehavior");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_RunBehaviorDynamic.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_RunBehaviorDynamic::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTTask_RunBehaviorDynamic");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_SetTagCooldown.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_SetTagCooldown::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTTask_SetTagCooldown");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_Wait.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_Wait::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTTask_Wait");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_WaitBlackboardTime.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_WaitBlackboardTime::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.BTTask_WaitBlackboardTime");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCrowdAgentInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCrowdAgentInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.CrowdAgentInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCrowdManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCrowdManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.CrowdManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQuery.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQuery::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQuery");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleLocation
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintEvent, Const)
	 * Parameters:
	 * 		class AActor*                                      QuerierActor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     ResultingLocation                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEnvQueryContext_BlueprintBase::ProvideSingleLocation(class AActor* QuerierActor, struct FVector* ResultingLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleLocation");
		
		UEnvQueryContext_BlueprintBase_ProvideSingleLocation_Params params {};
		params.QuerierActor = QuerierActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ResultingLocation != nullptr)
			*ResultingLocation = params.ResultingLocation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleActor
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent, Const)
	 * Parameters:
	 * 		class AActor*                                      QuerierActor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      ResultingActor                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEnvQueryContext_BlueprintBase::ProvideSingleActor(class AActor* QuerierActor, class AActor** ResultingActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleActor");
		
		UEnvQueryContext_BlueprintBase_ProvideSingleActor_Params params {};
		params.QuerierActor = QuerierActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ResultingActor != nullptr)
			*ResultingActor = params.ResultingActor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function AIModule.EnvQueryContext_BlueprintBase.ProvideLocationsSet
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent, Const)
	 * Parameters:
	 * 		class AActor*                                      QuerierActor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FVector>                             ResultingLocationSet                                       (Parm, OutParm, ZeroConstructor)
	 */
	void UEnvQueryContext_BlueprintBase::ProvideLocationsSet(class AActor* QuerierActor, TArray<struct FVector>* ResultingLocationSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryContext_BlueprintBase.ProvideLocationsSet");
		
		UEnvQueryContext_BlueprintBase_ProvideLocationsSet_Params params {};
		params.QuerierActor = QuerierActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ResultingLocationSet != nullptr)
			*ResultingLocationSet = params.ResultingLocationSet;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function AIModule.EnvQueryContext_BlueprintBase.ProvideActorsSet
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent, Const)
	 * Parameters:
	 * 		class AActor*                                      QuerierActor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class AActor*>                              ResultingActorsSet                                         (Parm, OutParm, ZeroConstructor)
	 */
	void UEnvQueryContext_BlueprintBase::ProvideActorsSet(class AActor* QuerierActor, TArray<class AActor*>* ResultingActorsSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryContext_BlueprintBase.ProvideActorsSet");
		
		UEnvQueryContext_BlueprintBase_ProvideActorsSet_Params params {};
		params.QuerierActor = QuerierActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ResultingActorsSet != nullptr)
			*ResultingActorsSet = params.ResultingActorsSet;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryContext_BlueprintBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryContext_BlueprintBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryContext_BlueprintBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryContext_Item.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryContext_Item::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryContext_Item");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryContext_Querier.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryContext_Querier::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryContext_Querier");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVisualLoggerExtension.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVisualLoggerExtension::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.VisualLoggerExtension");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryDebugHelpers.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryDebugHelpers::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryDebugHelpers");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEQSQueryResultSourceInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEQSQueryResultSourceInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EQSQueryResultSourceInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02321DF0
	 * 		Name   -> Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsLocations
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	TArray<struct FVector> UEnvQueryInstanceBlueprintWrapper::GetResultsAsLocations()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsLocations");
		
		UEnvQueryInstanceBlueprintWrapper_GetResultsAsLocations_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02321D50
	 * 		Name   -> Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsActors
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	TArray<class AActor*> UEnvQueryInstanceBlueprintWrapper::GetResultsAsActors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsActors");
		
		UEnvQueryInstanceBlueprintWrapper_GetResultsAsActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x023217F0
	 * 		Name   -> Function AIModule.EnvQueryInstanceBlueprintWrapper.GetItemScore
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            ItemIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float UEnvQueryInstanceBlueprintWrapper::GetItemScore(int32_t ItemIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryInstanceBlueprintWrapper.GetItemScore");
		
		UEnvQueryInstanceBlueprintWrapper_GetItemScore_Params params {};
		params.ItemIndex = ItemIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> DelegateFunction AIModule.EnvQueryInstanceBlueprintWrapper.EQSQueryDoneSignature__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class UEnvQueryInstanceBlueprintWrapper*           QueryInstance                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EEnvQueryStatus                                    QueryStatus                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEnvQueryInstanceBlueprintWrapper::EQSQueryDoneSignature__DelegateSignature(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, EEnvQueryStatus QueryStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction AIModule.EnvQueryInstanceBlueprintWrapper.EQSQueryDoneSignature__DelegateSignature");
		
		UEnvQueryInstanceBlueprintWrapper_EQSQueryDoneSignature__DelegateSignature_Params params {};
		params.QueryInstance = QueryInstance;
		params.QueryStatus = QueryStatus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryInstanceBlueprintWrapper.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryInstanceBlueprintWrapper::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryInstanceBlueprintWrapper");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryItemType_VectorBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryItemType_VectorBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryItemType_VectorBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryItemType_ActorBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryItemType_ActorBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryItemType_ActorBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryItemType_Actor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryItemType_Actor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryItemType_Actor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryItemType_Direction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryItemType_Direction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryItemType_Direction");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryItemType_Point.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryItemType_Point::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryItemType_Point");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02324350
	 * 		Name   -> Function AIModule.EnvQueryManager.RunEQSQuery
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UEnvQuery*                                   QueryTemplate                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Querier                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EEnvQueryRunMode                                   RunMode                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      WrapperClass                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash)
	 */
	class UEnvQueryInstanceBlueprintWrapper* UEnvQueryManager::STATIC_RunEQSQuery(class UObject* WorldContext, class UEnvQuery* QueryTemplate, class UObject* Querier, EEnvQueryRunMode RunMode, class UClass* WrapperClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryManager.RunEQSQuery");
		
		UEnvQueryManager_RunEQSQuery_Params params {};
		params.WorldContext = WorldContext;
		params.QueryTemplate = QueryTemplate;
		params.Querier = Querier;
		params.RunMode = RunMode;
		params.WrapperClass = WrapperClass;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryManager");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryGenerator_ActorsOfClass.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryGenerator_ActorsOfClass::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_ActorsOfClass");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02321D20
	 * 		Name   -> Function AIModule.EnvQueryGenerator_BlueprintBase.GetQuerier
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UObject* UEnvQueryGenerator_BlueprintBase::GetQuerier()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryGenerator_BlueprintBase.GetQuerier");
		
		UEnvQueryGenerator_BlueprintBase_GetQuerier_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function AIModule.EnvQueryGenerator_BlueprintBase.DoItemGeneration
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent, Const)
	 * Parameters:
	 * 		TArray<struct FVector>                             ContextLocations                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void UEnvQueryGenerator_BlueprintBase::DoItemGeneration(TArray<struct FVector> ContextLocations)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryGenerator_BlueprintBase.DoItemGeneration");
		
		UEnvQueryGenerator_BlueprintBase_DoItemGeneration_Params params {};
		params.ContextLocations = ContextLocations;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0231FEE0
	 * 		Name   -> Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedVector
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, Const)
	 * Parameters:
	 * 		struct FVector                                     GeneratedVector                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEnvQueryGenerator_BlueprintBase::AddGeneratedVector(const struct FVector& GeneratedVector)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedVector");
		
		UEnvQueryGenerator_BlueprintBase_AddGeneratedVector_Params params {};
		params.GeneratedVector = GeneratedVector;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0231FE60
	 * 		Name   -> Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedActor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, Const)
	 * Parameters:
	 * 		class AActor*                                      GeneratedActor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEnvQueryGenerator_BlueprintBase::AddGeneratedActor(class AActor* GeneratedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedActor");
		
		UEnvQueryGenerator_BlueprintBase_AddGeneratedActor_Params params {};
		params.GeneratedActor = GeneratedActor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryGenerator_BlueprintBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryGenerator_BlueprintBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_BlueprintBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryGenerator_Composite.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryGenerator_Composite::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_Composite");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryGenerator_ProjectedPoints.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryGenerator_ProjectedPoints::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_ProjectedPoints");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryGenerator_Donut.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryGenerator_Donut::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_Donut");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryGenerator_OnCircle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryGenerator_OnCircle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_OnCircle");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryGenerator_SimpleGrid.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryGenerator_SimpleGrid::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_SimpleGrid");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryGenerator_PathingGrid.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryGenerator_PathingGrid::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryGenerator_PathingGrid");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryTest_Distance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryTest_Distance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryTest_Distance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryTest_Dot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryTest_Dot::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryTest_Dot");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryTest_GameplayTags.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryTest_GameplayTags::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryTest_GameplayTags");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryTest_Pathfinding.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryTest_Pathfinding::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryTest_Pathfinding");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryTest_PathfindingBatch.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryTest_PathfindingBatch::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryTest_PathfindingBatch");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryTest_Random.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryTest_Random::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryTest_Random");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryTest_Trace.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryTest_Trace::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryTest_Trace");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryOption.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryOption::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EnvQueryOption");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEQSRenderingComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEQSRenderingComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EQSRenderingComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AEQSTestingPawn.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AEQSTestingPawn::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.EQSTestingPawn");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02326350
	 * 		Name   -> Function AIModule.CrowdFollowingComponent.SuspendCrowdSteering
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bSuspend                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCrowdFollowingComponent::SuspendCrowdSteering(bool bSuspend)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.CrowdFollowingComponent.SuspendCrowdSteering");
		
		UCrowdFollowingComponent_SuspendCrowdSteering_Params params {};
		params.bSuspend = bSuspend;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCrowdFollowingComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCrowdFollowingComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.CrowdFollowingComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function AIModule.PawnAction_BlueprintBase.ActionTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       ControlledPawn                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPawnAction_BlueprintBase::ActionTick(class APawn* ControlledPawn, float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.PawnAction_BlueprintBase.ActionTick");
		
		UPawnAction_BlueprintBase_ActionTick_Params params {};
		params.ControlledPawn = ControlledPawn;
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function AIModule.PawnAction_BlueprintBase.ActionStart
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       ControlledPawn                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPawnAction_BlueprintBase::ActionStart(class APawn* ControlledPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.PawnAction_BlueprintBase.ActionStart");
		
		UPawnAction_BlueprintBase_ActionStart_Params params {};
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function AIModule.PawnAction_BlueprintBase.ActionResume
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       ControlledPawn                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPawnAction_BlueprintBase::ActionResume(class APawn* ControlledPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.PawnAction_BlueprintBase.ActionResume");
		
		UPawnAction_BlueprintBase_ActionResume_Params params {};
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function AIModule.PawnAction_BlueprintBase.ActionPause
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       ControlledPawn                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPawnAction_BlueprintBase::ActionPause(class APawn* ControlledPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.PawnAction_BlueprintBase.ActionPause");
		
		UPawnAction_BlueprintBase_ActionPause_Params params {};
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function AIModule.PawnAction_BlueprintBase.ActionFinished
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class APawn*                                       ControlledPawn                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EPawnActionResult                                  WithResult                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPawnAction_BlueprintBase::ActionFinished(class APawn* ControlledPawn, EPawnActionResult WithResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.PawnAction_BlueprintBase.ActionFinished");
		
		UPawnAction_BlueprintBase_ActionFinished_Params params {};
		params.ControlledPawn = ControlledPawn;
		params.WithResult = WithResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPawnAction_BlueprintBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPawnAction_BlueprintBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.PawnAction_BlueprintBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPawnAction_Move.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPawnAction_Move::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.PawnAction_Move");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPawnAction_Repeat.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPawnAction_Repeat::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.PawnAction_Repeat");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPawnAction_Sequence.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPawnAction_Sequence::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.PawnAction_Sequence");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPawnAction_Wait.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPawnAction_Wait::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.PawnAction_Wait");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02325690
	 * 		Name   -> Function AIModule.PawnSensingComponent.SetSensingUpdatesEnabled
	 * 		Flags  -> (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPawnSensingComponent::SetSensingUpdatesEnabled(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.PawnSensingComponent.SetSensingUpdatesEnabled");
		
		UPawnSensingComponent_SetSensingUpdatesEnabled_Params params {};
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02325610
	 * 		Name   -> Function AIModule.PawnSensingComponent.SetSensingInterval
	 * 		Flags  -> (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              NewSensingInterval                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPawnSensingComponent::SetSensingInterval(float NewSensingInterval)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.PawnSensingComponent.SetSensingInterval");
		
		UPawnSensingComponent_SetSensingInterval_Params params {};
		params.NewSensingInterval = NewSensingInterval;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02325590
	 * 		Name   -> Function AIModule.PawnSensingComponent.SetPeripheralVisionAngle
	 * 		Flags  -> (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              NewPeripheralVisionAngle                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPawnSensingComponent::SetPeripheralVisionAngle(float NewPeripheralVisionAngle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.PawnSensingComponent.SetPeripheralVisionAngle");
		
		UPawnSensingComponent_SetPeripheralVisionAngle_Params params {};
		params.NewPeripheralVisionAngle = NewPeripheralVisionAngle;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> DelegateFunction AIModule.PawnSensingComponent.SeePawnDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPawnSensingComponent::SeePawnDelegate__DelegateSignature(class APawn* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction AIModule.PawnSensingComponent.SeePawnDelegate__DelegateSignature");
		
		UPawnSensingComponent_SeePawnDelegate__DelegateSignature_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> DelegateFunction AIModule.PawnSensingComponent.HearNoiseDelegate__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms, HasDefaults)
	 * Parameters:
	 * 		class APawn*                                       Instigator                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 * 		float                                              Volume                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPawnSensingComponent::HearNoiseDelegate__DelegateSignature(class APawn* Instigator, const struct FVector& Location, float Volume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction AIModule.PawnSensingComponent.HearNoiseDelegate__DelegateSignature");
		
		UPawnSensingComponent_HearNoiseDelegate__DelegateSignature_Params params {};
		params.Instigator = Instigator;
		params.Location = Location;
		params.Volume = Volume;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02321D00
	 * 		Name   -> Function AIModule.PawnSensingComponent.GetPeripheralVisionCosine
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UPawnSensingComponent::GetPeripheralVisionCosine()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.PawnSensingComponent.GetPeripheralVisionCosine");
		
		UPawnSensingComponent_GetPeripheralVisionCosine_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x02321CE0
	 * 		Name   -> Function AIModule.PawnSensingComponent.GetPeripheralVisionAngle
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UPawnSensingComponent::GetPeripheralVisionAngle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AIModule.PawnSensingComponent.GetPeripheralVisionAngle");
		
		UPawnSensingComponent_GetPeripheralVisionAngle_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPawnSensingComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPawnSensingComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AIModule.PawnSensingComponent");
		return ptr;
	}

}


