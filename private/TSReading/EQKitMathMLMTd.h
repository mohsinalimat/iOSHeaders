//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/EQKitMathMLNode.h>

#import <TSReading/EQKitLayoutSchemataTd-Protocol.h>
#import <TSReading/EQKitMathMLNode-Protocol.h>

@class NSArray, NSString;

@interface EQKitMathMLMTd : EQKitMathMLNode <EQKitMathMLNode, EQKitLayoutSchemataTd>
{
    NSArray *mChildren;
}

- (struct Schemata)layoutSchemata;
- (id)schemataChildren;
@property(readonly, copy) NSString *description;
- (_Bool)isBaseFontNameUsed;
- (int)isOperatorPaddingRequired;
- (void)dealloc;
- (const set_25e6ba53 *)mathMLAttributes;
- (id)initFromXMLNode:(struct _xmlNode *)arg1 parser:(id)arg2;
- (id)initWithChildren:(id)arg1 node:(struct _xmlNode *)arg2;
- (id)initWithChildren:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

