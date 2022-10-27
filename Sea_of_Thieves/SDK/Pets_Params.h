#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function Pets.PetAIController.OnPerceptionUpdated
	 */
	struct APetAIController_OnPerceptionUpdated_Params
	{
	public:
		TArray<class AActor*>                                      ChangedPerceivedActors;                                  // 0x0000(0x0010)  (Parm, ZeroConstructor)
	};

	/**
	 * Function Pets.PetAIController.GetAthenaAICharPathFollowingComp
	 */
	struct APetAIController_GetAthenaAICharPathFollowingComp_Params
	{
	public:
		class UAthenaAICharacterPathFollowingComponent*            ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Pets.PetHangoutSpotComponent.OnRep_IsOwnerSinking
	 */
	struct UPetHangoutSpotComponent_OnRep_IsOwnerSinking_Params
	{	};

	/**
	 * Function Pets.PetOwnerComponent.Server_RequestDismissal
	 */
	struct UPetOwnerComponent_Server_RequestDismissal_Params
	{	};

	/**
	 * Function Pets.PetsService.RemovePetFromActor
	 */
	struct UPetsService_RemovePetFromActor_Params
	{
	public:
		class AActor*                                              InOwner;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Pets.PetsService.AddPetForActorAndWield
	 */
	struct UPetsService_AddPetForActorAndWield_Params
	{
	public:
		class UClass*                                              InPetType;                                               // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		struct FPetCustomisation                                   InCustomisation;                                         // 0x0008(0x0028)  (ConstParm, Parm)
		class AActor*                                              InOwner;                                                 // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsWielded;                                               // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Pets.PetsService.AddPetForActor
	 */
	struct UPetsService_AddPetForActor_Params
	{
	public:
		class UClass*                                              InPetType;                                               // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		struct FPetCustomisation                                   InCustomisation;                                         // 0x0008(0x0028)  (ConstParm, Parm)
		class AActor*                                              InOwner;                                                 // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Pets.WieldablePet.OnRep_HungerReactAnimationState
	 */
	struct AWieldablePet_OnRep_HungerReactAnimationState_Params
	{	};

	/**
	 * Function Pets.WieldablePet.OnRep_DropRequest
	 */
	struct AWieldablePet_OnRep_DropRequest_Params
	{
	public:
		EWieldablePetDropRequestReason                             PriorDropRequest;                                        // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
