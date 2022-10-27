#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * Enum Slate.ETextJustify
	 */
	enum class ETextJustify : uint8_t
	{
		Left   = 0,
		Center = 1,
		Right  = 2,
		MAX    = 3
	};

	/**
	 * Enum Slate.ETableViewMode
	 */
	enum class ETableViewMode : uint8_t
	{
		List = 0,
		Tile = 1,
		Tree = 2,
		MAX  = 3
	};

	/**
	 * Enum Slate.ESelectionMode
	 */
	enum class ESelectionMode : uint8_t
	{
		None         = 0,
		Single       = 1,
		SingleToggle = 2,
		Multi        = 3,
		MAX          = 4
	};

	/**
	 * Enum Slate.EStretch
	 */
	enum class EStretch : uint8_t
	{
		None          = 0,
		Fill          = 1,
		ScaleToFit    = 2,
		ScaleToFitX   = 3,
		ScaleToFitY   = 4,
		ScaleToFill   = 5,
		UserSpecified = 6,
		MAX           = 7
	};

	/**
	 * Enum Slate.EStretchDirection
	 */
	enum class EStretchDirection : uint8_t
	{
		Both     = 0,
		DownOnly = 1,
		UpOnly   = 2,
		MAX      = 3
	};

	/**
	 * Enum Slate.EProgressBarFillType
	 */
	enum class EProgressBarFillType : uint8_t
	{
		LeftToRight    = 0,
		RightToLeft    = 1,
		FillFromCenter = 2,
		TopToBottom    = 3,
		BottomToTop    = 4,
		MAX            = 5
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct Slate.InputChord
	 * Size -> 0x0028
	 */
	struct FInputChord
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0020)
		unsigned char                                              bShift : 1;                                              // 0x0020(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              bCtrl : 1;                                               // 0x0020(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              bAlt : 1;                                                // 0x0020(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              bCmd : 1;                                                // 0x0020(0x0001) BIT_FIELD NoDestructor
		unsigned char                                              UnknownData_UWFV[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct Slate.Anchors
	 * Size -> 0x0010
	 */
	struct FAnchors
	{
	public:
		struct FVector2D                                           Minimum;                                                 // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector2D                                           Maximum;                                                 // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
