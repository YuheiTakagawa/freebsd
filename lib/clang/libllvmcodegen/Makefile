# $FreeBSD: releng/11.0/lib/clang/libllvmcodegen/Makefile 296417 2016-03-05 20:24:31Z dim $

.include <src.opts.mk>

LIB=	llvmcodegen

SRCDIR=	lib/CodeGen
SRCS=	AggressiveAntiDepBreaker.cpp \
	AllocationOrder.cpp \
	Analysis.cpp \
	AtomicExpandPass.cpp \
	BasicTargetTransformInfo.cpp \
	BranchFolding.cpp \
	CalcSpillWeights.cpp \
	CallingConvLower.cpp \
	CodeGen.cpp \
	CodeGenPrepare.cpp \
	CoreCLRGC.cpp \
	CriticalAntiDepBreaker.cpp \
	DFAPacketizer.cpp \
	DeadMachineInstructionElim.cpp \
	DwarfEHPrepare.cpp \
	EarlyIfConversion.cpp \
	EdgeBundles.cpp \
	ErlangGC.cpp \
	ExecutionDepsFix.cpp \
	ExpandISelPseudos.cpp \
	ExpandPostRAPseudos.cpp \
	FaultMaps.cpp \
	FuncletLayout.cpp \
	GCMetadata.cpp \
	GCRootLowering.cpp \
	GlobalMerge.cpp \
	IfConversion.cpp \
	ImplicitNullChecks.cpp \
	InlineSpiller.cpp \
	InterferenceCache.cpp \
	InterleavedAccessPass.cpp \
	IntrinsicLowering.cpp \
	LLVMTargetMachine.cpp \
	LatencyPriorityQueue.cpp \
	LexicalScopes.cpp \
	LiveDebugValues.cpp \
	LiveDebugVariables.cpp \
	LiveInterval.cpp \
	LiveIntervalAnalysis.cpp \
	LiveIntervalUnion.cpp \
	LivePhysRegs.cpp \
	LiveRangeCalc.cpp \
	LiveRangeEdit.cpp \
	LiveRegMatrix.cpp \
	LiveStackAnalysis.cpp \
	LiveVariables.cpp \
	LocalStackSlotAllocation.cpp \
	MIRPrinter.cpp \
	MIRPrintingPass.cpp \
	MachineBasicBlock.cpp \
	MachineBlockFrequencyInfo.cpp \
	MachineBlockPlacement.cpp \
	MachineBranchProbabilityInfo.cpp \
	MachineCSE.cpp \
	MachineCombiner.cpp \
	MachineCopyPropagation.cpp \
	MachineDominanceFrontier.cpp \
	MachineDominators.cpp \
	MachineFunction.cpp \
	MachineFunctionAnalysis.cpp \
	MachineFunctionPass.cpp \
	MachineFunctionPrinterPass.cpp \
	MachineInstr.cpp \
	MachineInstrBundle.cpp \
	MachineLICM.cpp \
	MachineLoopInfo.cpp \
	MachineModuleInfo.cpp \
	MachineModuleInfoImpls.cpp \
	MachinePassRegistry.cpp \
	MachinePostDominators.cpp \
	MachineRegionInfo.cpp \
	MachineRegisterInfo.cpp \
	MachineSSAUpdater.cpp \
	MachineScheduler.cpp \
	MachineSink.cpp \
	MachineTraceMetrics.cpp \
	MachineVerifier.cpp \
	OcamlGC.cpp \
	OptimizePHIs.cpp \
	PHIElimination.cpp \
	PHIEliminationUtils.cpp \
	ParallelCG.cpp \
	Passes.cpp \
	PeepholeOptimizer.cpp \
	PostRASchedulerList.cpp \
	ProcessImplicitDefs.cpp \
	PrologEpilogInserter.cpp \
	PseudoSourceValue.cpp \
	RegAllocBase.cpp \
	RegAllocBasic.cpp \
	RegAllocFast.cpp \
	RegAllocGreedy.cpp \
	RegAllocPBQP.cpp \
	RegisterClassInfo.cpp \
	RegisterCoalescer.cpp \
	RegisterPressure.cpp \
	RegisterScavenging.cpp \
	ScheduleDAG.cpp \
	ScheduleDAGInstrs.cpp \
	ScheduleDAGPrinter.cpp \
	ScoreboardHazardRecognizer.cpp \
	ShadowStackGC.cpp \
	ShadowStackGCLowering.cpp \
	ShrinkWrap.cpp \
	SjLjEHPrepare.cpp \
	SlotIndexes.cpp \
	SpillPlacement.cpp \
	SplitKit.cpp \
	StackColoring.cpp \
	StackMapLivenessAnalysis.cpp \
	StackMaps.cpp \
	StackProtector.cpp \
	StackSlotColoring.cpp \
	StatepointExampleGC.cpp \
	TailDuplication.cpp \
	TargetFrameLoweringImpl.cpp \
	TargetInstrInfo.cpp \
	TargetLoweringBase.cpp \
	TargetLoweringObjectFileImpl.cpp \
	TargetOptionsImpl.cpp \
	TargetRegisterInfo.cpp \
	TargetSchedule.cpp \
	TwoAddressInstructionPass.cpp \
	UnreachableBlockElim.cpp \
	VirtRegMap.cpp \
	WinEHPrepare.cpp

.if ${MK_CLANG_EXTRAS} != "no"
SRCS+=	GCMetadataPrinter.cpp \
	GCStrategy.cpp
.endif

TGHDRS=	Attributes \
	Intrinsics

.include "../clang.lib.mk"
