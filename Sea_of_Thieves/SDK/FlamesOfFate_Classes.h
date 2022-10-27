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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class FlamesOfFate.RemoveFlameOfFateTypeStep
	 * Size -> 0x0010 (FullSize[0x00A0] - InheritedSize[0x0090])
	 */
	class URemoveFlameOfFateTypeStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_9KBA[0x8];                                   // 0x0090(0x0008) Fix Super Size
		class URemoveFlameOfFateTypeStepDesc*                      Desc;                                                    // 0x0098(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
