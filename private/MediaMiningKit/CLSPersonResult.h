//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CLSPerson;

@interface CLSPersonResult : NSObject
{
    float _confidence;
    CLSPerson *_person;
}

+ (id)personResultWithPerson:(id)arg1 andConfidence:(float)arg2;
@property(nonatomic) float confidence; // @synthesize confidence=_confidence;
@property(retain, nonatomic) CLSPerson *person; // @synthesize person=_person;
- (void).cxx_destruct;
- (id)description;
- (void)mergeWithResult:(id)arg1;
- (_Bool)isSamePersonAsResult:(id)arg1;

@end

