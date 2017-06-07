//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <vCard/CNVCardLineFactory-Protocol.h>

@class NSString;

@interface CNVCardLineFactory : NSObject <CNVCardLineFactory>
{
}

+ (id)version21LineFactory;
+ (id)version30LineFactory;
- (id)versionPlaceholderLine;
- (id)lineWithLiteralValue:(id)arg1;
- (id)dataLineWithName:(id)arg1 value:(id)arg2;
- (id)arrayLineWithName:(id)arg1 value:(id)arg2 itemSeparator:(id)arg3;
- (id)arrayLineWithName:(id)arg1 value:(id)arg2;
- (id)stringLineWithName:(id)arg1 value:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

