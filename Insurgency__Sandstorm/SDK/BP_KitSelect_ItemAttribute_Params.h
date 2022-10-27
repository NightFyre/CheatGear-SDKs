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
	 * Function BP_KitSelect_ItemAttribute.BP_KitSelect_ItemAttribute_C.UpdateAttributeInfo
	 */
	struct UBP_KitSelect_ItemAttribute_C_UpdateAttributeInfo_Params
	{	};

	/**
	 * Function BP_KitSelect_ItemAttribute.BP_KitSelect_ItemAttribute_C.CreateAttributeImage
	 */
	struct UBP_KitSelect_ItemAttribute_C_CreateAttributeImage_Params
	{
	public:
		TArray<class UUserWidget*>                                 ImagesList;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
		class UHorizontalBox*                                      HorizontalBox;                                           // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_KitSelect_ItemAttribute.BP_KitSelect_ItemAttribute_C.SetImages
	 */
	struct UBP_KitSelect_ItemAttribute_C_SetImages_Params
	{
	public:
		TArray<class UTexture2D*>                                  ImagesHovered;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		TArray<class UTexture2D*>                                  ImagesSelected;                                          // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_KitSelect_ItemAttribute.BP_KitSelect_ItemAttribute_C.UpdateAttributeStyle
	 */
	struct UBP_KitSelect_ItemAttribute_C_UpdateAttributeStyle_Params
	{
	public:
		ELoadoutAttributeType                                      NewAttributeType;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_KitSelect_ItemAttribute.BP_KitSelect_ItemAttribute_C.GetAttributeDifferenceBrush
	 */
	struct UBP_KitSelect_ItemAttribute_C_GetAttributeDifferenceBrush_Params
	{
	public:
		struct FSlateBrush                                         ReturnValue;                                             // 0x0000(0x0088)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_KitSelect_ItemAttribute.BP_KitSelect_ItemAttribute_C.UpdateHoverDifferenceAngleAndTranslation
	 */
	struct UBP_KitSelect_ItemAttribute_C_UpdateHoverDifferenceAngleAndTranslation_Params
	{	};

	/**
	 * Function BP_KitSelect_ItemAttribute.BP_KitSelect_ItemAttribute_C.GetAttributeDifferenceVisibility
	 */
	struct UBP_KitSelect_ItemAttribute_C_GetAttributeDifferenceVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_KitSelect_ItemAttribute.BP_KitSelect_ItemAttribute_C.Tick
	 */
	struct UBP_KitSelect_ItemAttribute_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_KitSelect_ItemAttribute.BP_KitSelect_ItemAttribute_C.PreConstruct
	 */
	struct UBP_KitSelect_ItemAttribute_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_KitSelect_ItemAttribute.BP_KitSelect_ItemAttribute_C.Construct
	 */
	struct UBP_KitSelect_ItemAttribute_C_Construct_Params
	{	};

	/**
	 * Function BP_KitSelect_ItemAttribute.BP_KitSelect_ItemAttribute_C.DoSetImages
	 */
	struct UBP_KitSelect_ItemAttribute_C_DoSetImages_Params
	{
	public:
		TArray<class UTexture2D*>                                  ImagesSelected;                                          // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
		TArray<class UTexture2D*>                                  ImagesHovered;                                           // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_KitSelect_ItemAttribute.BP_KitSelect_ItemAttribute_C.ExecuteUbergraph_BP_KitSelect_ItemAttribute
	 */
	struct UBP_KitSelect_ItemAttribute_C_ExecuteUbergraph_BP_KitSelect_ItemAttribute_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
