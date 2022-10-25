#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * Function WBP_ChatEmojiList_Content.WBP_ChatEmojiList_Content_C.Construct
	 */
	struct UWBP_ChatEmojiList_Content_C_Construct_Params
	{	};

	/**
	 * Function WBP_ChatEmojiList_Content.WBP_ChatEmojiList_Content_C.OnSelected_Event_1
	 */
	struct UWBP_ChatEmojiList_Content_C_OnSelected_Event_1_Params
	{
	public:
		class FString                                              Code;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ChatEmojiList_Content.WBP_ChatEmojiList_Content_C.ExecuteUbergraph_WBP_ChatEmojiList_Content
	 */
	struct UWBP_ChatEmojiList_Content_C_ExecuteUbergraph_WBP_ChatEmojiList_Content_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_ChatEmojiList_Content.WBP_ChatEmojiList_Content_C.OnEmojiSelected__DelegateSignature
	 */
	struct UWBP_ChatEmojiList_Content_C_OnEmojiSelected__DelegateSignature_Params
	{
	public:
		class FString                                              Code;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
