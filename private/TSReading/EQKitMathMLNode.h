//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <TSReading/EQKitLayoutNode-Protocol.h>

@class NSString;
@protocol EQKitLayoutNode;

@interface EQKitMathMLNode : NSObject <EQKitLayoutNode>
{
    id <EQKitLayoutNode> mParent;
}

@property(nonatomic) id <EQKitLayoutNode> parent; // @synthesize parent=mParent;
- (_Bool)isAttributeDefaultInheritableFromStyle:(int)arg1;
- (int)isOperatorPaddingRequired;
- (id)operatorCore;
- (_Bool)isEmbellishedOperator;
- (long long)scriptLevelWithBase:(long long)arg1;
- (_Bool)isBaseFontNameUsed;
- (_Bool)isSpaceLike;
- (_Bool)isNumber;
- (id)layoutStyleNode;
- (struct Schemata)layoutSchemata;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

