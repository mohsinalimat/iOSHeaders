//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _EditScriptRangedAtom : NSObject
{
    NSString *_replacementText;
    struct _NSRange _editRange;
}

+ (id)atomWithEditRange:(struct _NSRange)arg1 replacementText:(id)arg2;
@property(retain, nonatomic) NSString *replacementText; // @synthesize replacementText=_replacementText;
@property(nonatomic) struct _NSRange editRange; // @synthesize editRange=_editRange;
- (void).cxx_destruct;
- (id)description;
- (id)initWithEditRange:(struct _NSRange)arg1 replacementText:(id)arg2;

@end
