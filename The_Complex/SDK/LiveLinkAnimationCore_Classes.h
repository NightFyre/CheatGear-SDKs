#pragma once

/**
 * Name: The_Complex
 * Version: 9349459
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
	 * Class LiveLinkAnimationCore.LiveLinkInstance
	 * Size -> 0x0008 (FullSize[0x0350] - InheritedSize[0x0348])
	 */
	class ULiveLinkInstance : public UAnimInstance
	{
	public:
		class ULiveLinkRetargetAsset*                              CurrentRetargetAsset;                                    // 0x0348(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void SetSubject(const struct FLiveLinkSubjectName& SubjectName);
		void SetRetargetAsset(class UClass* RetargetAsset);
		static UClass* StaticClass();
	};

	/**
	 * Class LiveLinkAnimationCore.LiveLinkRetargetAsset
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULiveLinkRetargetAsset : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LiveLinkAnimationCore.LiveLinkRemapAsset
	 * Size -> 0x00A0 (FullSize[0x00C8] - InheritedSize[0x0028])
	 */
	class ULiveLinkRemapAsset : public ULiveLinkRetargetAsset
	{
	public:
		unsigned char                                              UnknownData_QSLQ[0xA0];                                  // 0x0028(0x00A0) MISSED OFFSET (PADDING)

	public:
		void RemapCurveElements(TMap<class FName, float>* CurveItems);
		class FName GetRemappedCurveName(const class FName& CurveName);
		class FName GetRemappedBoneName(const class FName& BoneName);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
