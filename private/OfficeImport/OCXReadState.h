//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <OfficeImport/OCXState.h>

__attribute__((visibility("hidden")))
@interface OCXReadState : OCXState
{
}

- (id)OCXReadRequiredRelationshipForNode:(struct _xmlNode *)arg1 packagePart:(id)arg2;
- (id)OCXReadRequiredRelationshipForNode:(struct _xmlNode *)arg1 attributeName:(const char *)arg2 packagePart:(id)arg3;
- (id)OCXReadRelationshipForNode:(struct _xmlNode *)arg1 packagePart:(id)arg2;
- (id)OCXReadRelationshipForNode:(struct _xmlNode *)arg1 attributeName:(const char *)arg2 packagePart:(id)arg3;

@end

