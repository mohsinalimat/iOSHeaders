//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface UMLogMessage : NSObject
{
    NSMutableArray *_publicStrings;
    NSMutableArray *_privateStrings;
}

+ (id)messageWithTask:(id)arg1 privateFormat:(id)arg2;
+ (id)messageWithTask:(id)arg1 publicFormat:(id)arg2;
+ (id)messageWithTask:(id)arg1;
+ (void)_addTaskInfoFrom:(id)arg1 toMessage:(id)arg2;
+ (id)messageWithUser:(id)arg1 privateFormat:(id)arg2;
+ (id)messageWithUser:(id)arg1 publicFormat:(id)arg2;
+ (id)messageWithUser:(id)arg1;
+ (void)_addUserInfoFrom:(id)arg1 toMessage:(id)arg2;
+ (id)messageWithPrivateFormat:(id)arg1 arguments:(struct __va_list_tag [1])arg2;
+ (id)messageWithPublicFormat:(id)arg1 arguments:(struct __va_list_tag [1])arg2;
+ (id)messageWithPrivateFormat:(id)arg1;
+ (id)messageWithPublicFormat:(id)arg1;
@property(retain, nonatomic) NSMutableArray *privateStrings; // @synthesize privateStrings=_privateStrings;
@property(retain, nonatomic) NSMutableArray *publicStrings; // @synthesize publicStrings=_publicStrings;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *privateString;
@property(readonly, nonatomic) NSString *publicString;
- (id)_stringForArray:(id)arg1;
- (void)addPrivateFormat:(id)arg1;
- (void)addPublicFormat:(id)arg1;
- (id)init;

@end

