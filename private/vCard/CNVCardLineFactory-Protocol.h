//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <vCard/NSObject-Protocol.h>

@class NSArray, NSData, NSString;
@protocol CNVCardLine, CNVCardParameterLine;

@protocol CNVCardLineFactory <NSObject>
- (id <CNVCardLine>)versionPlaceholderLine;
- (id <CNVCardLine>)lineWithLiteralValue:(NSString *)arg1;
- (id <CNVCardParameterLine>)dataLineWithName:(NSString *)arg1 value:(NSData *)arg2;
- (id <CNVCardParameterLine>)arrayLineWithName:(NSString *)arg1 value:(NSArray *)arg2 itemSeparator:(NSString *)arg3;
- (id <CNVCardParameterLine>)arrayLineWithName:(NSString *)arg1 value:(NSArray *)arg2;
- (id <CNVCardParameterLine>)stringLineWithName:(NSString *)arg1 value:(NSString *)arg2;
@end

