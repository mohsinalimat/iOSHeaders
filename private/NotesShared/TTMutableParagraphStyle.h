//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NotesShared/TTParagraphStyle.h>

@class TTTodo;

@interface TTMutableParagraphStyle : TTParagraphStyle
{
}

+ (id)paragraphStyleNamed:(unsigned int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(nonatomic) long long alignment; // @dynamic alignment;
@property(nonatomic) unsigned int hints; // @dynamic hints;
@property(nonatomic) unsigned long long indent; // @dynamic indent;
@property(nonatomic) _Bool needsListCleanup; // @dynamic needsListCleanup;
@property(nonatomic) _Bool needsParagraphCleanup; // @dynamic needsParagraphCleanup;
@property(nonatomic) unsigned long long startingItemNumber; // @dynamic startingItemNumber;
@property(nonatomic) unsigned int style; // @dynamic style;
@property(retain, nonatomic) TTTodo *todo; // @dynamic todo;
@property(nonatomic) long long writingDirection; // @dynamic writingDirection;

@end

