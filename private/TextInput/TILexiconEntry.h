//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextInput/NSCopying-Protocol.h>
#import <TextInput/NSSecureCoding-Protocol.h>

@class NSString;

@interface TILexiconEntry : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_userInput;
    NSString *_documentText;
}

+ (id)entryWithDocumentText:(id)arg1 userInput:(id)arg2;
+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSString *documentText; // @synthesize documentText=_documentText;
@property(readonly, nonatomic) NSString *userInput; // @synthesize userInput=_userInput;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

