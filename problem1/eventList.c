#include "eventList.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

EventList *CreateEventList(void)
{
    EventList *eventList = malloc(sizeof(EventList));
    eventList->isEmpty = 1;
    eventList->head = NULL;
    eventList->last = NULL;
}

void DestroyEventList(EventList *this)
{
}

Event *SearchEvent(EventList *this, char *name)
{

}

void AddEvent(EventList *this, Event *event)
{
    if (this->isEmpty = 1)
    {
        this->isEmpty = 0;
        this->head = event;
        this->last = event;
        event->next = NULL;
    }
    else
    {
        this->last->next = event;
        this->last = event;
    }
}

void RemoveEvent(EventList *this, char *name)
{
}

void ListEvents(EventList *this)
{
    if (this->isEmpty == 1)
    {
        printf(*empty\n *);
    }
    else
    {
        printf(* %d\n *.this->head->eventName);
    }
}
