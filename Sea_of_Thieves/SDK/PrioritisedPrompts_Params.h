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
	 * Function PrioritisedPrompts.BasePromptCoordinator.UpdateVisiblePrompt
	 */
	struct UBasePromptCoordinator_UpdateVisiblePrompt_Params
	{	};

	/**
	 * Function PrioritisedPrompts.BasePromptCoordinator.UnregisterOtherEvents_Implementable
	 */
	struct UBasePromptCoordinator_UnregisterOtherEvents_Implementable_Params
	{	};

	/**
	 * Function PrioritisedPrompts.BasePromptCoordinator.UnregisterCharacterEvents_Implementable
	 */
	struct UBasePromptCoordinator_UnregisterCharacterEvents_Implementable_Params
	{
	public:
		struct FObjectMessagingDispatcherHandle                    CharacterDispatcher;                                     // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function PrioritisedPrompts.BasePromptCoordinator.Uninitialize_Implementable
	 */
	struct UBasePromptCoordinator_Uninitialize_Implementable_Params
	{	};

	/**
	 * Function PrioritisedPrompts.BasePromptCoordinator.Uninitialize
	 */
	struct UBasePromptCoordinator_Uninitialize_Params
	{	};

	/**
	 * Function PrioritisedPrompts.BasePromptCoordinator.Start
	 */
	struct UBasePromptCoordinator_Start_Params
	{	};

	/**
	 * Function PrioritisedPrompts.BasePromptCoordinator.SetPromptAs
	 */
	struct UBasePromptCoordinator_SetPromptAs_Params
	{
	public:
		struct FPrioritisedPromptWithHandle                        Prompt;                                                  // 0x0000(0x0068)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function PrioritisedPrompts.BasePromptCoordinator.RegisterOtherEvents_Implementable
	 */
	struct UBasePromptCoordinator_RegisterOtherEvents_Implementable_Params
	{	};

	/**
	 * Function PrioritisedPrompts.BasePromptCoordinator.RegisterCharacterEvents_Implementable
	 */
	struct UBasePromptCoordinator_RegisterCharacterEvents_Implementable_Params
	{
	public:
		struct FObjectMessagingDispatcherHandle                    CharacterDispatcher;                                     // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function PrioritisedPrompts.BasePromptCoordinator.OnControllerEndPlay
	 */
	struct UBasePromptCoordinator_OnControllerEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrioritisedPrompts.BasePromptCoordinator.MarkAsComplete_Implementable
	 */
	struct UBasePromptCoordinator_MarkAsComplete_Implementable_Params
	{	};

	/**
	 * Function PrioritisedPrompts.BasePromptCoordinator.MakeShowPrompt
	 */
	struct UBasePromptCoordinator_MakeShowPrompt_Params
	{
	public:
		struct FPrioritisedPromptWithHandle                        Prompt;                                                  // 0x0000(0x0068)  (ConstParm, Parm, OutParm, ReferenceParm)
		struct FPromptEvaluation                                   ReturnValue;                                             // 0x0068(0x0070)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function PrioritisedPrompts.BasePromptCoordinator.MakeHideCurrentPrompts
	 */
	struct UBasePromptCoordinator_MakeHideCurrentPrompts_Params
	{
	public:
		struct FPromptEvaluation                                   ReturnValue;                                             // 0x0000(0x0070)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function PrioritisedPrompts.BasePromptCoordinator.MakeCompleteCoordinator
	 */
	struct UBasePromptCoordinator_MakeCompleteCoordinator_Params
	{
	public:
		struct FPromptEvaluation                                   ReturnValue;                                             // 0x0000(0x0070)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function PrioritisedPrompts.BasePromptCoordinator.Initialize
	 */
	struct UBasePromptCoordinator_Initialize_Params
	{
	public:
		class AAthenaPlayerController*                             PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrioritisedPromptsManager*                          PrioritisedPromptsManager;                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrioritisedPrompts.BasePromptCoordinator.GetCompleted
	 */
	struct UBasePromptCoordinator_GetCompleted_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PrioritisedPrompts.BasePromptCoordinator.EvaluatePromptDisplayState
	 */
	struct UBasePromptCoordinator_EvaluatePromptDisplayState_Params
	{
	public:
		struct FPromptEvaluation                                   ReturnValue;                                             // 0x0000(0x0070)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function PrioritisedPrompts.BasePromptCoordinator.DismissAllPrompts
	 */
	struct UBasePromptCoordinator_DismissAllPrompts_Params
	{	};

	/**
	 * Function PrioritisedPrompts.GetPromptsLocalService.GetPromptsLocalService
	 */
	struct UGetPromptsLocalService_GetPromptsLocalService_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UGetPromptsLocalService*                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrioritisedPrompts.PromptsLocalServiceInterface.IncrementCountForKey
	 */
	struct UPromptsLocalServiceInterface_IncrementCountForKey_Params
	{
	public:
		class UClass*                                              AccessKey;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function PrioritisedPrompts.PromptsLocalServiceInterface.GetCountForKey
	 */
	struct UPromptsLocalServiceInterface_GetCountForKey_Params
	{
	public:
		class UClass*                                              AccessKey;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
