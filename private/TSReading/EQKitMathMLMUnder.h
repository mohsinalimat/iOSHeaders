//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/EQKitMathMLBinaryNode.h>

#import <TSReading/EQKitLayoutSchemataUnderover-Protocol.h>

@class NSString;

@interface EQKitMathMLMUnder : EQKitMathMLBinaryNode <EQKitLayoutSchemataUnderover>
{
}

- (id)operatorCore;
- (_Bool)isEmbellishedOperator;
- (struct Schemata)layoutSchemata;
- (id)schemataOver;
- (id)schemataUnder;
- (id)schemataBase;
- (const set_25e6ba53 *)mathMLAttributes;
- (id)initFromXMLNode:(struct _xmlNode *)arg1 parser:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

