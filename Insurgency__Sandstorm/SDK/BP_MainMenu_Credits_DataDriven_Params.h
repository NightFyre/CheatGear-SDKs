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
	 * Function BP_MainMenu_Credits_DataDriven.BP_MainMenu_Credits_DataDriven_C.CreateSplitRowListFromStrings
	 */
	struct UBP_MainMenu_Credits_DataDriven_C_CreateSplitRowListFromStrings_Params
	{
	public:
		TArray<class FString>                                      Names;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_Credits_DataDriven.BP_MainMenu_Credits_DataDriven_C.StringArrayToText
	 */
	struct UBP_MainMenu_Credits_DataDriven_C_StringArrayToText_Params
	{
	public:
		TArray<class FString>                                      String;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		TArray<class FText>                                        Text;                                                    // 0x0010(0x0010)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_Credits_DataDriven.BP_MainMenu_Credits_DataDriven_C.CreatePersonelList
	 */
	struct UBP_MainMenu_Credits_DataDriven_C_CreatePersonelList_Params
	{
	public:
		TArray<class FString>                                      Names;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		TArray<class FString>                                      Roles;                                                   // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		bool                                                       bUseRoles;                                               // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_L4M6[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MainMenu_Credits_DataDriven.BP_MainMenu_Credits_DataDriven_C.CreateSubHeaderFromString
	 */
	struct UBP_MainMenu_Credits_DataDriven_C_CreateSubHeaderFromString_Params
	{
	public:
		class FString                                              Header;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_Credits_DataDriven.BP_MainMenu_Credits_DataDriven_C.CreateHeaderFromString
	 */
	struct UBP_MainMenu_Credits_DataDriven_C_CreateHeaderFromString_Params
	{
	public:
		class FString                                              Header;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_Credits_DataDriven.BP_MainMenu_Credits_DataDriven_C.PopulateCreditFromVersion
	 */
	struct UBP_MainMenu_Credits_DataDriven_C_PopulateCreditFromVersion_Params
	{
	public:
		class FString                                              Version;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FText                                                DisplayText;                                             // 0x0010(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_MainMenu_Credits_DataDriven.BP_MainMenu_Credits_DataDriven_C.OnKeyUp
	 */
	struct UBP_MainMenu_Credits_DataDriven_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_MainMenu_Credits_DataDriven.BP_MainMenu_Credits_DataDriven_C.OnAnalogValueChanged
	 */
	struct UBP_MainMenu_Credits_DataDriven_C_OnAnalogValueChanged_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FAnalogInputEvent                                   InAnalogInputEvent;                                      // 0x0038(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0078(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_MainMenu_Credits_DataDriven.BP_MainMenu_Credits_DataDriven_C.ResetScroll
	 */
	struct UBP_MainMenu_Credits_DataDriven_C_ResetScroll_Params
	{	};

	/**
	 * Function BP_MainMenu_Credits_DataDriven.BP_MainMenu_Credits_DataDriven_C.OnPageSelected
	 */
	struct UBP_MainMenu_Credits_DataDriven_C_OnPageSelected_Params
	{
	public:
		EnumMainMenuPage                                           NewPage;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5NX2[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_MainMenu_Credits_DataDriven.BP_MainMenu_Credits_DataDriven_C.BndEvt__CreditsScrollBox_K2Node_ComponentBoundEvent_1_OnUserScrolledEvent__DelegateSignature
	 */
	struct UBP_MainMenu_Credits_DataDriven_C_BndEvt__CreditsScrollBox_K2Node_ComponentBoundEvent_1_OnUserScrolledEvent__DelegateSignature_Params
	{
	public:
		float                                                      CurrentOffset;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_Credits_DataDriven.BP_MainMenu_Credits_DataDriven_C.Tick
	 */
	struct UBP_MainMenu_Credits_DataDriven_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_Credits_DataDriven.BP_MainMenu_Credits_DataDriven_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature
	 */
	struct UBP_MainMenu_Credits_DataDriven_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_MainMenu_Credits_DataDriven.BP_MainMenu_Credits_DataDriven_C.Construct
	 */
	struct UBP_MainMenu_Credits_DataDriven_C_Construct_Params
	{	};

	/**
	 * Function BP_MainMenu_Credits_DataDriven.BP_MainMenu_Credits_DataDriven_C.ExecuteUbergraph_BP_MainMenu_Credits_DataDriven
	 */
	struct UBP_MainMenu_Credits_DataDriven_C_ExecuteUbergraph_BP_MainMenu_Credits_DataDriven_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MainMenu_Credits_DataDriven.BP_MainMenu_Credits_DataDriven_C.OnNavigateBack__DelegateSignature
	 */
	struct UBP_MainMenu_Credits_DataDriven_C_OnNavigateBack__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
