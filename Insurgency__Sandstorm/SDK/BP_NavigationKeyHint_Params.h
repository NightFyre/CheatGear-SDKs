#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * Function BP_NavigationKeyHint.BP_NavigationKeyHint_C.SetIsUsingController
	 */
	struct UBP_NavigationKeyHint_C_SetIsUsingController_Params
	{
	public:
		bool                                                       bUsingController;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EeInputIconType                                            IconType;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NavigationKeyHint.BP_NavigationKeyHint_C.Construct
	 */
	struct UBP_NavigationKeyHint_C_Construct_Params
	{	};

	/**
	 * Function BP_NavigationKeyHint.BP_NavigationKeyHint_C.PreConstruct
	 */
	struct UBP_NavigationKeyHint_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NavigationKeyHint.BP_NavigationKeyHint_C.ExecuteUbergraph_BP_NavigationKeyHint
	 */
	struct UBP_NavigationKeyHint_C_ExecuteUbergraph_BP_NavigationKeyHint_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NavigationKeyHint.BP_NavigationKeyHint_C.OnPressed__DelegateSignature
	 */
	struct UBP_NavigationKeyHint_C_OnPressed__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
