﻿// Copyright (c) Viga Entertainment Technology Pvt. ltd. 2022, All rights Reserved

#pragma once

#include "Widgets/SCompoundWidget.h"
#include "Input/Reply.h"
#include "Types/SlateEnums.h"
#include "Widgets/DeclarativeSyntaxSupport.h"

class SEditableTextBox;

class SRgbPoseLiveLinkSourceFactory : public SCompoundWidget
{
public:
	DECLARE_DELEGATE_OneParam(FOnOkClicked, FIPv4Endpoint);

	SLATE_BEGIN_ARGS(SRgbPoseLiveLinkSourceFactory){}
	SLATE_EVENT(FOnOkClicked, OnOkClicked)
SLATE_END_ARGS()

void Construct(const FArguments& Args);

private:

	void OnEndpointChanged(const FText& NewValue, ETextCommit::Type);

	FReply OnOkClicked();

	TWeakPtr<SEditableTextBox> EditabledText;
	FOnOkClicked OkClicked;
};