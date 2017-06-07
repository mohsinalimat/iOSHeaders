//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSSecureCoding-Protocol.h>

@class NSString;

@interface AFDialogPhase : NSObject <NSSecureCoding>
{
    long long _type;
}

+ (_Bool)supportsSecureCoding;
+ (id)_dialogPhaseWithType:(long long)arg1;
+ (id)userRequestDialogPhase;
+ (id)cancelledDialogPhase;
+ (id)confirmedDialogPhase;
+ (id)errorDialogPhase;
+ (id)completionDialogPhase;
+ (id)confirmationDialogPhase;
+ (id)summaryDialogPhase;
+ (id)clarificationDialogPhase;
+ (id)statusDialogPhase;
+ (id)reflectionDialogPhase;
+ (id)acknowledgementDialogPhase;
+ (id)dialogPhaseForAceDialogPhase:(id)arg1;
@property(readonly, nonatomic, getter=_type) long long type; // @synthesize type=_type;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
@property(readonly, nonatomic, getter=isSummaryDialogPhase) _Bool summaryDialogPhase;
@property(readonly, nonatomic, getter=isCompletionDialogPhase) _Bool completionDialogPhase;
@property(readonly, nonatomic, getter=isErrorDialogPhase) _Bool errorDialogPhase;
@property(readonly, nonatomic, getter=isUserRequestDialogPhase) _Bool userRequestDialogPhase;
@property(readonly, nonatomic, getter=isCancelledDialogPhase) _Bool cancelledDialogPhase;
@property(readonly, nonatomic, getter=isConfirmedDialogPhase) _Bool confirmedDialogPhase;
@property(readonly, nonatomic, getter=isClarificationDialogPhase) _Bool clarificationDialogPhase;
@property(readonly, nonatomic, getter=isReflectionDialogPhase) _Bool reflectionDialogPhase;
@property(readonly, nonatomic, getter=isConfirmationDialogPhase) _Bool confirmationDialogPhase;
@property(readonly, nonatomic, getter=isExpository) _Bool expository;
@property(readonly, nonatomic, getter=isTemporary) _Bool temporary;
- (_Bool)replacesPreviousSnippetContents;
@property(readonly, nonatomic) NSString *aceDialogPhaseValue;
- (_Bool)isEqualToDialogPhase:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)_initWithType:(long long)arg1;

@end

