//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

@class NSString, TSCECalculationEngine, TSTExpressionNode, TSTTableInfo;

__attribute__((visibility("hidden")))
@interface TSTFormula : NSObject <NSCopying>
{
    TSTExpressionNode *mExpressionTree;
    TSCECalculationEngine *mCalculationEngine;
    TSTTableInfo *mHostInfo;
    NSString *mInitialWhitespace;
    struct TSUCellCoord mHostCell;
    _Bool mSyntaxError;
    _Bool mFixupFormulas;
    _Bool mFormulaWasFixable;
    _Bool mFormulaFixupsShouldStick;
    _Bool mEmpty;
}

+ (id)p_charactersToTemporarilyChopOffEndToFixSyntaxError;
+ (unsigned long long)parenCountAtCharIndex:(unsigned long long)arg1 unmatchedParenCount:(unsigned long long)arg2 quoteContext:(int)arg3 inStorage:(id)arg4;
+ (unsigned long long)parenCountAtCharIndex:(unsigned long long)arg1 inStorage:(id)arg2;
+ (int)formulaQuoteContextAtCharIndex:(unsigned long long)arg1 inStorage:(id)arg2;
+ (int)quoteContextAtCharIndex:(unsigned long long)arg1 previousContext:(int)arg2 inStorage:(id)arg3;
+ (id)equalsCharacters;
+ (id)rightParenCharacters;
+ (id)leftParenCharacters;
+ (id)doubleQuoteCharacters;
+ (id)leadingSingleQuoteEscapeCharacters;
+ (id)singleQuoteCharacters;
+ (id)formulaForCell:(id)arg1 atCellID:(struct TSUCellCoord)arg2 inTable:(id)arg3;
@property(copy, nonatomic) NSString *initialWhitespace; // @synthesize initialWhitespace=mInitialWhitespace;
@property(nonatomic, getter=isEmpty) _Bool empty; // @synthesize empty=mEmpty;
@property(readonly, nonatomic) _Bool formulaFixupsShouldStick; // @synthesize formulaFixupsShouldStick=mFormulaFixupsShouldStick;
@property(readonly, nonatomic) _Bool formulaWasFixable; // @synthesize formulaWasFixable=mFormulaWasFixable;
@property(nonatomic) _Bool fixupFormulas; // @synthesize fixupFormulas=mFixupFormulas;
@property(nonatomic, getter=isSyntaxError) _Bool syntaxError; // @synthesize syntaxError=mSyntaxError;
@property(retain, nonatomic) TSCECalculationEngine *calculationEngine; // @synthesize calculationEngine=mCalculationEngine;
@property(retain, nonatomic) TSTExpressionNode *expressionTree; // @synthesize expressionTree=mExpressionTree;
- (id)simplify;
- (_Bool)canSimplify;
- (id)p_formulaAsTextReturningTokenValues:(_Bool)arg1;
- (id)description;
- (id)formulaDetokenizedText;
- (id)formulaPlainText;
- (id)p_fixFormula:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)reparseWithStorage:(id)arg1 adjustExpressionTree:(CDUnknownBlockType)arg2;
- (void)reparseWithStorage:(id)arg1;
- (id)nodesToCheckForBareArgumentPlaceholders;
- (_Bool)hasBareArgumentPlaceholders;
- (void)insertFormulaText:(id)arg1 includeWhitespace:(_Bool)arg2;
@property(readonly, nonatomic) struct TSCEFormula formula;
@property(readonly, nonatomic) struct TSCEFormula geometricFormula;
- (void)reset;
- (void)dealloc;
- (id)initWithCalculationEngine:(id)arg1 hostCell:(struct TSUCellCoord)arg2 hostTable:(id)arg3;
- (id)initWithContext:(id)arg1 calculationEngine:(id)arg2 hostCell:(struct TSUCellCoord)arg3 TSCEFormula:(const struct TSCEFormula *)arg4 ownerID:(struct __CFUUID *)arg5;
- (id)initWithContext:(id)arg1 calculationEngine:(id)arg2 hostCell:(struct TSUCellCoord)arg3 TSCEFormula:(const struct TSCEFormula *)arg4 ownerID:(struct __CFUUID *)arg5 suppressAutomaticNamedReferenceInvalidation:(_Bool)arg6;
- (id)initWithCalculationEngine:(id)arg1 expressionTree:(id)arg2 hostCell:(struct TSUCellCoord)arg3 hostTable:(id)arg4;

@end

