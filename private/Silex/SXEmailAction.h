//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Silex/SXAction.h>

@class NSString;

@interface SXEmailAction : SXAction
{
    NSString *_recipient;
    NSString *_subject;
}

@property(readonly, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(readonly, nonatomic) NSString *recipient; // @synthesize recipient=_recipient;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (Class)handlerClass;
- (id)initWithSubject:(id)arg1 recipient:(id)arg2 addition:(id)arg3;
- (id)initWithAddition:(id)arg1;

@end

