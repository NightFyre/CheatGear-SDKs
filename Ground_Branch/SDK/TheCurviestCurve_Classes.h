#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class TheCurviestCurve.CurveCurviestBlueprintUtils
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCurveCurviestBlueprintUtils : public UBlueprintFunctionLibrary
	{
	public:
		float GetValueFromCurve(class UCurveBase* Curve, const class FName& Name, float InTime);
		static UClass* StaticClass();
	};

	/**
	 * Class TheCurviestCurve.CurveCurviest
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UCurveCurviest : public UCurveBase
	{
	public:
		TArray<struct FCurviestCurveData>                          CurveData;                                               // 0x0030(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2FEN[0x8];                                   // 0x0040(0x0008) MISSED OFFSET (PADDING)

	public:
		float GetFloatValue(const class FName& Name, float InTime);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
