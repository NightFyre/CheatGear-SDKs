#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum DonkehFrameworkUI.EMenuActivationMode
	 */
	enum class EMenuActivationMode : uint8_t
	{
		Transparent = 0,
		Opaque      = 1,
		Exclusive   = 2,
		MAX         = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct DonkehFrameworkUI.MenuStackEntry
	 * Size -> 0x0010
	 */
	struct FMenuStackEntry
	{
	public:
		class UDFBaseMenu*                                         Menu;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMenuActivationMode                                        ActivationMode;                                          // 0x0008(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowMouseCursor;                                        // 0x0009(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUIOnlyInput;                                            // 0x000A(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y9VK[0x5];                                   // 0x000B(0x0005) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct DonkehFrameworkUI.MinimapPOITableRow
	 * Size -> 0x0128 (FullSize[0x0130] - InheritedSize[0x0008])
	 */
	struct FMinimapPOITableRow : public FTableRowBase
	{
	public:
		unsigned char                                              ActorClass[0x28];                                        // 0x0008(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              bMatchChildClasses : 1;                                  // 0x0030(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V1B6[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              ToolTipWidgetClass[0x28];                                // 0x0038(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              WidgetClass[0x28];                                       // 0x0060(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		struct FSlateBrush                                         IconBrush;                                               // 0x0088(0x0088) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                ToolTipText;                                             // 0x0110(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		unsigned char                                              bSelectable : 1;                                         // 0x0128(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDynamic : 1;                                            // 0x0128(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bFixedRotation : 1;                                      // 0x0128(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HSZF[0x7];                                   // 0x0129(0x0007) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
